// C Standard Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

// RevanScript (RVS) Core / Engine Libraries
#include "../include/rvsio.h"
#include "../include/rvsctl.h"
#include "../include/rvsmem.h"
#include "../include/rvsflg.h"
#include "../include/rvsprs.h"
#include "../include/rvstbl.h"
#include "../include/rvsstd.h"
#include "../include/rvserr.h"
#include "../include/rvskey.h"


// RevanScript (RVS) Keywords (Length)
const unsigned short rvs_keywords_length[RVS_KEYWORD_COUNT] = {
    4, // -> Keyword 1   (var)   Length
    4, // -> Keyword 2   (let)   Length
    4, // -> Keyword 3   (set)   Length
    4, // -> Keyword 4   (get)   Length
    4, // -> Keyword 5   (cst)   Length
    4, // -> Keyword 6   (out)   Length
    4, // -> Keyword 7   (inp)   Length
    4, // -> Keyword 8   (del)   Length
    4, // -> Keyword 9   (prt)   Length
    3, // -> Keyword 10  (end)   Length
};


// RevanScript (RVS) Keyword List
const char rvs_keyword_list[RVS_KEYWORD_COUNT][4] = {
    "var",   // -> 1 (Variable) -- Variable Create (Dynamic Types) (Keyword)
    "let",   // -> 2 (Let) -- Variable Create (Dynamic Types/Constant Value)
    "set",   // -> 3 (Set) -- Variable Change Value (Keyword)
    "get",   // -> 4 (Get) -- Variable Meta-Data Print (Table) Display (Keyword)
    "cst",   // -> 5 (Constant) -- Variable Constant Define (Keyword)
    "out",   // -> 6 (Output) -- Variable Value Console Output (Keyword)
    "inp",   // -> 7 (Input) -- Standard Keyboard Input (Keyword)
    "del",   // -> 8 (Delete) -- Variable Delete (Keyword)
    "prt",   // -> 9 (Print) -- Direct Console Output (Keyword)
    "end",   // -> 10 (End) -- Process Finish (Keyword)
};


// RevanScript (RVS) Variable Create Function
bool var(const char* const code_line, RVSMEM* rvs_memory){
	// RevanScript Standard Variable Parser
	RVSPRS* rvs_parser = rvs_standard_variable(code_line, rvs_memory, false, true);
	if (!rvs_parser) return false;

	// RevanScript Insert Memory
	if (rvs_memory_insert(rvs_memory, rvs_parser->rvs_buffer) == false){
		rvs_parser_delete(rvs_parser);
		return false;
	}
	
	// Delete (Buffer, Expression, Parser) Memorys
	rvs_parser_delete(rvs_parser);
	return true;
}


// RevanScript (RVS) Constant Variable Create Function 
bool let(const char* const code_line, RVSMEM* rvs_memory){
	// RevanScript Standard Variable Parser
	RVSPRS* rvs_parser = rvs_standard_variable(code_line, rvs_memory, true, true);
	if (!rvs_parser) return false;

	// RevanScript Insert Memory
	if (rvs_memory_insert(rvs_memory, rvs_parser->rvs_buffer) == false){
		rvs_parser_delete(rvs_parser);
		return false;
	}
	
	// Delete (Buffer, Expression, Parser) Memorys
	rvs_parser_delete(rvs_parser);
	return true;
}


// RevanScript (RVS) Set Function
bool set(const char* const code_line, RVSMEM* rvs_memory){
	// Variable Parser
	RVSPRS* rvs_parser = rvs_standard_variable(code_line, rvs_memory, false, false);
	if (!rvs_parser) return false;

	// RevanScript Set Memory
	if (rvs_memory_set(rvs_memory, rvs_parser->rvs_buffer) == false){
		rvs_parser_delete(rvs_parser);
		return false;
	}

	// Delete Buffer
	rvs_parser_delete(rvs_parser);
	return true;
}


// RevanScript (RVS) Get (Variable Meta Data Information) Function
bool get(const char* const code_line, const RVSMEM* const rvs_memory, const int8_t* const rvs_execution_mode){
	// RevanScript Variable Name Parser
	RVSBUF* rvs_buffer = rvs_variable_name_parser(code_line);
	if (!rvs_buffer) return false;

	if (!rvs_variable_name_check(rvs_buffer->variable_name, NULL, false)){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	if (rvs_memory_get(rvs_memory, rvs_buffer) == true){
		struct RVSTBLConfig rvs_table_config = {.rows=2, .cols=5, .width=25, .height=1};
		RVSTBL* rvs_table = rvs_table_create(rvs_table_config);
		rvs_table_insert(rvs_table, "Variable Name");
		rvs_table_insert(rvs_table, rvs_buffer->variable_name);
		rvs_table_insert(rvs_table, "Variable Data");
		rvs_table_insert(rvs_table, rvs_buffer->variable_data);
		rvs_table_insert(rvs_table, "Variable Type");

		switch (rvs_buffer->variable_type){
			case RVS_STRING_TYPE:  rvs_table_insert(rvs_table, "String");   break;
			case RVS_INTEGER_TYPE: rvs_table_insert(rvs_table, "Integer");  break;
			case RVS_FLOAT_TYPE:   rvs_table_insert(rvs_table, "Float");    break;
			case RVS_BOOLEAN_TYPE: rvs_table_insert(rvs_table, "Boolean");  break;
			case RVS_NULL_TYPE:    rvs_table_insert(rvs_table, "Null");     break;
		}
		
		rvs_table_insert(rvs_table, "Variable Constant");
		rvs_table_insert(rvs_table, (rvs_buffer->variable_const == true) ? "TRUE" : "FALSE");
		rvs_table_insert(rvs_table, "Variable Address");
		rvs_table_insert(rvs_table, rvs_buffer->variable_address);
		rvs_standard_table_output(rvs_table);
		rvs_table_delete(rvs_table);
	}

	else{
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	rvs_buffer_delete(rvs_buffer);
	return true;
}


// RevanScript (RVS) Output Function
bool out(const char* const code_line, const RVSMEM* const rvs_memory, const int8_t* const rvs_execution_mode){
	// RevanScript Variable Name Parser
	RVSBUF* rvs_buffer = rvs_variable_name_parser(code_line);
	if (!rvs_buffer) return false;

	// RevanScript Variable Name Check
	if (!rvs_variable_name_check(rvs_buffer->variable_name, NULL, false)){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	// RevanScript Output
	if (rvs_memory_get(rvs_memory, rvs_buffer) == true){
		RVSIO_Buffer iobuf;
		iobuf.output_buffer = rvs_buffer->variable_data;
		rvs_standard_output(&iobuf, rvs_execution_mode);
		rvs_buffer_delete(rvs_buffer);
		return true;
	}

	else{
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	// RevanScript Buffer Delete
	rvs_buffer_delete(rvs_buffer);
	return true;
}


// RevanScript (RVS) Input Function
bool inp(const char* const code_line, RVSMEM* rvs_memory, const int8_t* const rvs_execution_mode){
	// RevanScript Variable Name Parser
	RVSBUF* rvs_buffer = rvs_variable_name_parser(code_line);
	if (!rvs_buffer) return false;

	// Variable Name Check
	if (rvs_variable_name_check(rvs_buffer->variable_name, rvs_memory, false) == false){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}
	
	// RevanScript Standard Input
	RVSIO_Buffer iobuf;
	iobuf.input_buffer = rvs_buffer->variable_data;
	rvs_standard_input(&iobuf, rvs_execution_mode);
	rvs_buffer->variable_type = RVS_STRING_TYPE;

	// RevanScript Set Memory
	if (rvs_memory_set(rvs_memory, rvs_buffer) == false){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}
	
	// Delete Buffer
	rvs_buffer_delete(rvs_buffer);
	return true;
}


// RevanScript (RVS) Constant Function
bool cst(const char* const code_line, RVSMEM* rvs_memory){
	// RevanScript Variable Name Parser
	RVSBUF* rvs_buffer = rvs_variable_name_parser(code_line);
	if (!rvs_buffer) return false;

	// RevanScript Variable Name Check
	if (rvs_variable_name_check(rvs_buffer->variable_name, rvs_memory, false) == false){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	// RevanScript Memory Variable Constant Define
	if (rvs_memory_const(rvs_memory, rvs_buffer) == false){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	// Delete Buffer
	rvs_buffer_delete(rvs_buffer);
	return true;
}


// RevanScript (RVS) Delete Function
bool del(const char* const code_line, RVSMEM* rvs_memory){
	// RevanScript Variable Name Parser
	RVSBUF* rvs_buffer = rvs_variable_name_parser(code_line);
	if (!rvs_buffer) return false;

	// RevanScript Variable Name Check
	if (rvs_variable_name_check(rvs_buffer->variable_name, rvs_memory, false) == false){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	// RevanScript Variable Clear Memory
	if (rvs_memory_clear(rvs_memory, rvs_buffer) == false){
		rvs_buffer_delete(rvs_buffer);
		return false;
	}

	// RevanScript Buffer Delete
	rvs_buffer_delete(rvs_buffer);
	return true;
}


// RevanScript (RVS) Print Function
bool prt(const char* const code_line, const int8_t* const rvs_execution_mode){
	RVS_DIRECT_PARSER* rvs_direct_parser = rvs_direct_data_parser(code_line);
	if (!rvs_direct_parser) return false;
	if (rvs_direct_data_check(
		rvs_direct_parser->rvs_direct_buffer, 
		rvs_direct_parser->rvs_direct_logic) == false){
		free(rvs_direct_parser);
		return false;
	}
	RVSIO_Buffer iobuf;
	iobuf.output_buffer = rvs_direct_parser->rvs_direct_buffer->direct_data;
	rvs_standard_output(&iobuf, rvs_execution_mode);
	return true;
}


// RevanScript (RVS) Keyword Search Function
bool keys(const char* const code_line, RVSMEM* rvs_memory, bool* end_process_check, const int8_t const* rvs_execution_mode){
	if (strncmp(code_line, "...", 3) == 0){
		return true;
	}

	else if (strncmp(code_line, "var ", rvs_keywords_length[0]) == 0){
		if (!var(code_line + 4, rvs_memory)) return false;
		return true;
	}

	else if (strncmp(code_line, "let ", rvs_keywords_length[1]) == 0){
		if (!let(code_line + 4, rvs_memory)) return false;
		return true;
	}

	else if (strncmp(code_line, "set ", rvs_keywords_length[2]) == 0){
		if (!set(code_line + 4, rvs_memory)) return false;
		return true;
	}

	else if (strncmp(code_line, "get ", rvs_keywords_length[3]) == 0){
		if (!get(code_line + 4, rvs_memory, rvs_execution_mode)) return false;
		return true;
	}

	else if (strncmp(code_line, "out ", rvs_keywords_length[4]) == 0){
		if (!out(code_line + 4, rvs_memory, rvs_execution_mode)) return false;
		return true;
	}

	else if (strncmp(code_line, "inp ", rvs_keywords_length[5]) == 0){
		if (!inp(code_line + 4, rvs_memory, rvs_execution_mode)) return false;
		return true;
	}

	else if (strncmp(code_line, "cst ", rvs_keywords_length[6]) == 0){
		if (!cst(code_line + 4, rvs_memory)) return false;
		return true;
	}

	else if (strncmp(code_line, "del ", rvs_keywords_length[7]) == 0){
		if (!del(code_line + 4, rvs_memory)) return false;
		return true;
	}

	else if (strncmp(code_line, "prt ", rvs_keywords_length[8]) == 0){
		if (!prt(code_line + 4, rvs_execution_mode)) return false;
		return true;
	}

	else if (strncmp(code_line, "end", rvs_keywords_length[9]) == 0){
		*end_process_check = true;
		return true;
	}
	
	else{
		char* keyword_name = (char*) malloc(sizeof(char) * 5);
		if (!keyword_name) return false;
		strncpy(keyword_name, code_line, 4);
		keyword_name[strlen(keyword_name) - 1] = '\0';
		rvs_standard_error(RVS_KEYWORD_NAME_ERROR, keyword_name);
		free(keyword_name);
		return false;
	}
}