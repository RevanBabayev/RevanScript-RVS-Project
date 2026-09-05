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
#include <stdlib.h>

// RevanScript (RVS) Core / Engine Libraries 
#include "../includes/rvsctl.h"
#include "../includes/rvslgc.h"


// RevanScript Direct Data Logic (Create Function)
RVS_DIRECT_LOGIC* rvs_direct_logic_create(void){
	RVS_DIRECT_LOGIC* rvs_direct_logic = (RVS_DIRECT_LOGIC*) malloc(sizeof(RVS_DIRECT_LOGIC));
	if (!rvs_direct_logic) return NULL;
	rvs_direct_logic->string_literal_check = false;
	rvs_direct_logic->binary_start_operation_check = false;
	rvs_direct_logic->expression_check = false;
	rvs_direct_logic->expression_queue = RVS_UNDEFINED_QUEUE;
	return rvs_direct_logic;
}

// RevanScript Direct Data Logic (Delete Function)
void rvs_direct_logic_delete(RVS_DIRECT_LOGIC* rvs_direct_logic){
	free(rvs_direct_logic);
}

// RevanScript Variable Logic (Create Function)
RVS_VARIABLE_LOGIC* rvs_logic_create(void){
    RVS_VARIABLE_LOGIC* rvs_variable_logic = (RVS_VARIABLE_LOGIC*) malloc(sizeof(RVS_VARIABLE_LOGIC));
    if (!rvs_variable_logic) return NULL;
    rvs_variable_logic->assignment_operation_check = false;
	rvs_variable_logic->string_literal_check = false;
	rvs_variable_logic->binary_start_operation_check = false;
	rvs_variable_logic->expression_check = false;
	rvs_variable_logic->expression_queue = RVS_UNDEFINED_QUEUE;
    return rvs_variable_logic;
}

// RevanScript Variable Logic (Delete Function)
void rvs_logic_delete(RVS_VARIABLE_LOGIC* rvs_logic){
	free(rvs_logic);
}