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
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>


// RevanScript (RVS) Core / Engine Libraries
#include "../includes/rvstbl.h"


// RevanScript (RVS) Table Create Function
RVSTBL* rvs_table_create(const struct RVSTBLConfig rvs_table_config){
    RVSTBL* rvs_table = (RVSTBL*) malloc(sizeof(RVSTBL));
    if (!rvs_table) return NULL;

    size_t length = rvs_table_config.rows * rvs_table_config.cols;

    rvs_table->datas = (char**) malloc(sizeof(char*) * length);
    if (!rvs_table->datas){
        free(rvs_table);
        return NULL;
    }

    for (size_t i = 0; i < length; i++){
        rvs_table->datas[i] = (char*) calloc(sizeof(char), 2048);
        if (!rvs_table->datas[i]){
            for (size_t j = 0; j < i; j++){
                free(rvs_table->datas[j]);
            }
            free(rvs_table->datas);
            free(rvs_table);
            return NULL;
        }
    }

    rvs_table->config.rows = rvs_table_config.rows;
    rvs_table->config.cols = rvs_table_config.cols;
    rvs_table->config.width = rvs_table_config.width;
    rvs_table->config.height = rvs_table_config.height;

    rvs_table->length = length;
    rvs_table->iter = 0;

    return rvs_table;
}

// RevanScript (RVS) Table Resize Function
bool rvs_table_resize(RVSTBL* rvs_table, const size_t new_size){
    char** new_rvs_table_datas = (char**) realloc(rvs_table->datas, sizeof(char*) * new_size);
    if (!new_rvs_table_datas) return false;

    for (size_t i = rvs_table->length; i < new_size; i++){
        char* new_rvs_table_slot = (char*) calloc(sizeof(char), 2048);
        if (!new_rvs_table_slot){
            for (size_t j = rvs_table->length; j < i; j++){
                free(new_rvs_table_datas[j]);
            }
            return false;
        }
        new_rvs_table_datas[i] = new_rvs_table_slot;
    }

    rvs_table->length = new_size;
    rvs_table->datas = new_rvs_table_datas;
    return true;
}

// RevanScript (RVS) Table Insert Function
bool rvs_table_insert(RVSTBL* rvs_table, const size_t count, ...){
    // Reallocate Table Memory
    if (rvs_table->iter == rvs_table->length){
        size_t new_rvs_table_length = rvs_table->length * 2;
        if (rvs_table_resize(rvs_table, new_rvs_table_length) == false) return false;
    }

    va_list rvs_table_args;
    va_start(rvs_table_args, count);

    for (size_t i = 0; i < count; i++){
        // Data Logic
        char* data = va_arg(rvs_table_args, char*);
        size_t data_length = strlen(data);
        size_t i = 0;

        // Data Write
        rvs_table->datas[rvs_table->iter][i++] = ' ';
        for (; i < data_length + 1; i++){
            rvs_table->datas[rvs_table->iter][i] = data[i - 1];
        }

        // Space Write
        if (rvs_table->config.width > data_length){
            for (; i < rvs_table->config.width; i++){
                rvs_table->datas[rvs_table->iter][i] = ' ';
            }
        }

        // End Write Process
        rvs_table->datas[rvs_table->iter][i] = '\0';
        rvs_table->iter++;
    }

    va_end(rvs_table_args);
    return true;
}

// RevanScript (RVS) Table Delete Function
void rvs_table_delete(RVSTBL* rvs_table){
    for (size_t i = 0; i < rvs_table->length; i++){
        free(rvs_table->datas[i]);
    }
    free(rvs_table->datas);
    free(rvs_table);
}