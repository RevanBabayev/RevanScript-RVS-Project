/*
	© 2026 Rəvan Babayev. All rights reserved.
	--------------------------------------------
	License : GPLv3 / Open Source Project
	--------------------------------------------
	RvCodes9 -- GitHub / YouTube / Reddit -- Platform
	--------------------------------------------
	RevanScript (RVS) Programming Language
	RevanScript (RVS) Interpreter Program (Direct Execution Model)
	--------------------------------------------
	C Source Codes  |  C1999 / C99 Standard | Compiler -> GNU Compiler Collection (GCC) and Clang
	--------------------------------------------
	automatic gcc compile file -> shell/executable-gcc.sh
	automatic clang compile file -> shell/executable-clang.sh
	automatic mingw-gcc compile file -> shell/executable-mingw-gcc.sh
	---------------------------------------------
	SimpleMake (Source Codes Build Tool) Support
	---------------------------------------------
*/


// C Standard Libraries
#include <stdbool.h>
#include <string.h>

// RevanScript (RVS) Core / Engine Libraries
#include "../include/rvsprs.h"
#include "../include/rvsmem.h"
#include "../include/rvsbuf.h"
#include "../include/rvsctl.h"


// RevanScript Variable Automatic Configure Function 
RVSPRS* rvs_standard_variable(const char* const code_line, RVSMEM* rvs_memory, bool variable_const, bool create_mode){
    // Variable Parser
	RVSPRS* rvs_parser = rvs_variable_parser(code_line);
	if (!rvs_parser) return NULL;

	// RevanScript Buffer "Variable Name" Checking
	if (rvs_variable_name_check(rvs_parser->rvs_buffer->variable_name, rvs_memory, create_mode, false) == false){
		// Dellocate
		rvs_parser_delete(rvs_parser);
		return NULL;
	}

	// RevanScript "Constant Argument Check/Define"
	if (variable_const == true){
		rvs_parser->rvs_buffer->variable_const = true;
	}

	// RevanScript "Constant Variable" Define
	if (create_mode == true && rvs_parser->rvs_buffer->variable_name[0] == '_'){
		if (variable_const == false) rvs_parser->rvs_buffer->variable_const = true;
		else rvs_parser->rvs_buffer->variable_const = false;
	}

	// RevanScript Expression Process
	if (rvs_parser->rvs_buffer->variable_type == RVS_EXPRESSION_TYPE){
		if (!rvs_expression_process(rvs_parser->rvs_expression, rvs_parser->rvs_buffer)){
			// Dellocate
			rvs_parser_delete(rvs_parser);
			return NULL;
		}
	}

	// RevanScript automatic NULL data
	else if (rvs_parser->rvs_logic->assignment_operation_check == false){
		strcpy(rvs_parser->rvs_buffer->variable_data, "NULL");
		rvs_parser->rvs_buffer->variable_type = RVS_NULL_TYPE;
	}

	// RevanScript Buffer "Variable Data" Checking
	else if (rvs_variable_data_check(rvs_parser->rvs_buffer, rvs_memory, rvs_parser->rvs_logic) == false){
		// Dellocate
		rvs_parser_delete(rvs_parser);
		return NULL;
	}

	if (rvs_parser->rvs_buffer->variable_type == RVS_VARIABLE_TYPE){
		if (rvs_memory_get(rvs_memory, rvs_parser->rvs_buffer, true) == false){
			// Dellocate
			rvs_parser_delete(rvs_parser);
			return NULL;
		}
	}

    return rvs_parser;
}