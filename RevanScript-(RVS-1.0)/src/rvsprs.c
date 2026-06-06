#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "../include/rvsprs.h"
#include "../include/rvsbuf.h"
#include "../include/rvsexp.h"
#include "../include/rvslgc.h"
#include "../include/rvsmem.h"
#include "../include/rvsctl.h"
#include "../include/rvsio.h"


// RevanScript Parser Memory Create
RVSPRS* _rvs_parser_create(void){
	RVSPRS* rvs_parser = (RVSPRS*) malloc(sizeof(RVSPRS));
	if (!rvs_parser) return NULL;
	return rvs_parser;
}


// RevanScript Parser Memory Delete
void rvs_parser_delete(RVSPRS* rvs_parser){
	free(rvs_parser);
}


// RevanScript (RVS) Variable Parser Function
RVSPRS* rvs_variable_parser(const char* const code_line){

	// RevanScript (RVS) Parser Memory
	RVSPRS* rvs_parser = _rvs_parser_create();
	if (!rvs_parser) return NULL;

    // RevanScript (RVS) Buffer Memory
	RVSBUF* rvs_variable_buffer = rvs_buffer_create();
	if (!rvs_variable_buffer){
		rvs_parser_delete(rvs_parser);
		return NULL;
	}
 
	// RevanScript (RVS) Expression Memory
	RVSEXP* rvs_variable_expression = rvs_expression_create();
	if (!rvs_variable_expression){
		rvs_buffer_delete(rvs_variable_buffer);
		rvs_parser_delete(rvs_parser);
		return NULL;
	}

	// RevanScript Parsing Logic Operation
	RVSLGC* rvs_variable_logic = rvs_logic_create();
	if (!rvs_variable_logic){
		rvs_buffer_delete(rvs_variable_buffer);
		rvs_expression_delete(rvs_variable_expression);
		rvs_parser_delete(rvs_parser);
		return NULL;
	}

	// Connect Pointers
	rvs_parser->rvs_buffer = rvs_variable_buffer;
	rvs_parser->rvs_expression = rvs_variable_expression;
	rvs_parser->rvs_logic = rvs_variable_logic;

	// Parsing
	for (size_t i = 0; code_line[i] != '\n' && code_line[i] != '\0'; i++){

		// Assignment Operator
		if (code_line[i] == '='){
			if (rvs_variable_logic->assignment_operation_check == false){
				rvs_variable_logic->assignment_operation_check = true;
			}
		}

		// Variable Name
		else if (rvs_variable_logic->assignment_operation_check == false){
			if (code_line[i] == ' ') continue;
			rvs_variable_buffer->variable_name[rvs_variable_buffer->variable_name_counter++] = code_line[i];
		}

		// Variable Data 
		else if (rvs_variable_logic->assignment_operation_check == true){

			// String Data Literal (Open / Close) System
			if (code_line[i] == '\"'){
				if (rvs_variable_logic->string_literal_check == false){
					rvs_variable_logic->string_literal_check = true;
					if (rvs_variable_buffer->variable_type == RVS_UNDEFINED_TYPE){
						rvs_variable_buffer->variable_type = RVS_STRING_TYPE;
					}
				}

				else{
					rvs_variable_logic->string_literal_check = false;
					break;
				}
			}

			// Binary Type (Open) System
 			else if (rvs_variable_logic->string_literal_check == false && code_line[i] == 'b'){
				if (rvs_variable_logic->binary_start_operation_check == false){
					rvs_variable_logic->binary_start_operation_check = true;
					if (rvs_variable_buffer->variable_type == RVS_UNDEFINED_TYPE){
						rvs_variable_buffer->variable_type = RVS_BINARY_TYPE;
					}
				}
			}

			// Expression Parsing
			else if (code_line[i] == '('){ // Open 
				if (rvs_variable_logic->expression_check == false){
					rvs_variable_logic->expression_check = true;
					if (rvs_variable_buffer->variable_type == RVS_UNDEFINED_TYPE){
						rvs_variable_buffer->variable_type = RVS_EXPRESSION_TYPE;
					}
				}
			}
			
			else if (code_line[i] == ')'){ // Close
				if (rvs_variable_logic->expression_check == true){
					rvs_variable_logic->expression_check = false;
					break;
				}
			}

			// Expression Data write
			else if (rvs_variable_logic->expression_check == true){
				if (code_line[i] == ' ') continue;

				// Numbers Buffer Write
				else if (isdigit(code_line[i]) != 0){
					rvs_variable_expression->nums[rvs_variable_expression->nums_counter][rvs_variable_expression->char_counter++] = code_line[i];
					if (rvs_variable_logic->expression_queue != RVS_NUMBER_QUEUE){
						rvs_variable_logic->expression_queue = RVS_NUMBER_QUEUE;
					}
				}

				//  Operators Buffer Write
				else if (code_line[i] == '+' || code_line[i] == '-' || code_line[i] == '*' || code_line[i] == '/'){
					if (rvs_variable_logic->expression_queue == RVS_UNDEFINED_QUEUE){
						//printf("\nEXPRESSION FIRST OPERATOR INVALID\n");
						rvs_buffer_delete(rvs_variable_buffer);
						rvs_expression_delete(rvs_variable_expression);
						rvs_logic_delete(rvs_variable_logic);
						rvs_parser_delete(rvs_parser);
						return NULL;
					}

					else if (rvs_variable_logic->expression_queue == RVS_OPERATOR_QUEUE){
						//printf("\nEXPRESSION INVALID\n");
						rvs_buffer_delete(rvs_variable_buffer);
						rvs_expression_delete(rvs_variable_expression);
						rvs_logic_delete(rvs_variable_logic);
						rvs_parser_delete(rvs_parser);
						return NULL;
					}

					// Number Buffer Config
					rvs_variable_expression->nums[rvs_variable_expression->nums_counter][rvs_variable_expression->char_counter] = '\0';
					rvs_variable_expression->nums_counter++;
					rvs_variable_expression->char_counter = 0;

					rvs_variable_expression->ops[rvs_variable_expression->ops_counter++] = code_line[i]; 
					rvs_variable_logic->expression_queue = RVS_OPERATOR_QUEUE;
				}
			} 

			// String Data Buffer write
			else if (rvs_variable_logic->string_literal_check == true){
				if (code_line[i] == '\\' && code_line[i + 1] == '\\'){
					rvs_variable_buffer->variable_data[rvs_variable_buffer->variable_data_counter++] = '\\';
					++i;
				}

				else if (code_line[i] == '\\' && code_line[i + 1] == '\"'){
					rvs_variable_buffer->variable_data[rvs_variable_buffer->variable_data_counter++] = '\"';
					++i;
				}

				else{
					rvs_variable_buffer->variable_data[rvs_variable_buffer->variable_data_counter++] = code_line[i];
				}
			}

			// Boolean, Integer, Float, Binary, Null and Variable Types Parsing
			else{
				if (code_line[i] == ' ') continue;
				rvs_variable_buffer->variable_data[rvs_variable_buffer->variable_data_counter++] = code_line[i];
			}
		}
	}

	// RevanScript Buffer Null Terminators
	rvs_variable_buffer->variable_name[rvs_variable_buffer->variable_name_counter] = '\0';
	rvs_variable_buffer->variable_data[rvs_variable_buffer->variable_data_counter] = '\0';
	rvs_variable_expression->ops[rvs_variable_expression->ops_counter] = '\0';
	rvs_variable_expression->nums[rvs_variable_expression->nums_counter++][rvs_variable_expression->char_counter] = '\0';

    return rvs_parser;
}


// RevanScript (RVS) Variable Name Parser
RVSBUF* rvs_variable_name_parser(const char* const code_line){
	// RevanScript (RVS) Variable Buffer
	RVSBUF* rvs_buffer = rvs_buffer_create();
	if (!rvs_buffer) return NULL;

	// Parsing
	for (size_t i = 0; code_line[i] != '\n' && code_line[i] != '\0'; i++){
		if (code_line[i] == ' ') continue;
		rvs_buffer->variable_name[rvs_buffer->variable_name_counter++] = code_line[i];
	}
	rvs_buffer->variable_name[rvs_buffer->variable_name_counter] = '\0';
	return rvs_buffer;
}


// RevanScript (RVS) Direct String Parser
RVSIO* rvs_direct_string_parser(const char* const code_line){
	RVSIO* buffer = (char*) malloc(sizeof(char) * 2048);
	if (!buffer) return NULL;
	size_t buffer_counter = 0;

	bool string_literal_check = false;

	for (size_t i = 0; code_line[i] != '\n' && code_line[i] != '\0'; i++){

		if (code_line[i] == '\"'){
			if (string_literal_check == false){
				string_literal_check = true;
				continue;
			}

			else{
				string_literal_check = false;
			}
		}

		else if (string_literal_check == true){
			if (code_line[i] == '\\' && code_line[i + 1] == '\\'){
				buffer[buffer_counter++] = '\\';
				++i;
			}

			else if (code_line[i] == '\\' && code_line[i + 1] == '\"'){
				buffer[buffer_counter++] = '\"';
				++i;
			}

			else{
				buffer[buffer_counter++] = code_line[i];
			}
		}
	}

	if (string_literal_check == true){
		rvs_standard_error(RVS_STRING_LITERAL_ERROR, NULL);
		free(buffer);
		return NULL;
	}

	buffer[buffer_counter] = '\0';
	return buffer;
}