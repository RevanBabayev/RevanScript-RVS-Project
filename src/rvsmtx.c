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
#include <stddef.h>

// RevanScript (RVS) Core Engine Libraries
#include "../includes/rvsmtx.h"

// Signed Unsafe Matrix Create Function

// RevanScript (RVS) Character Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_CHARACTER_MATRIX* rvs_dynamic_unsafe_character_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_CHARACTER_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_CHARACTER_MATRIX*) malloc(sizeof(RVS_DYNAMIC_CHARACTER_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (char**) malloc(sizeof(char*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (char*) malloc(sizeof(char) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Integer Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_INTEGER_MATRIX* rvs_dynamic_unsafe_integer_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_INTEGER_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_INTEGER_MATRIX*) malloc(sizeof(RVS_DYNAMIC_INTEGER_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (int**) malloc(sizeof(int*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (int*) malloc(sizeof(int) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Float Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_FLOAT_MATRIX* rvs_dynamic_unsafe_float_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_FLOAT_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_FLOAT_MATRIX*) malloc(sizeof(RVS_DYNAMIC_FLOAT_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (float**) malloc(sizeof(float*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (float*) malloc(sizeof(float) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Double Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_DOUBLE_MATRIX* rvs_dynamic_unsafe_double_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_DOUBLE_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_DOUBLE_MATRIX*) malloc(sizeof(RVS_DYNAMIC_DOUBLE_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (double**) malloc(sizeof(double*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (double*) malloc(sizeof(double) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Boolean Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_BOOLEAN_MATRIX* rvs_dynamic_unsafe_boolean_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_BOOLEAN_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_BOOLEAN_MATRIX*) malloc(sizeof(RVS_DYNAMIC_BOOLEAN_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (bool**) malloc(sizeof(bool*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (bool*) malloc(sizeof(bool) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Short Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_SHORT_MATRIX* rvs_dynamic_unsafe_short_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_SHORT_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_SHORT_MATRIX*) malloc(sizeof(RVS_DYNAMIC_SHORT_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (short**) malloc(sizeof(short*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (short*) malloc(sizeof(short) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Long Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_LONG_MATRIX* rvs_dynamic_unsafe_long_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_LONG_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_LONG_MATRIX*) malloc(sizeof(RVS_DYNAMIC_LONG_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (long**) malloc(sizeof(long*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (long*) malloc(sizeof(long) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Long Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_LONG_LONG_MATRIX* rvs_dynamic_unsafe_long_long_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_LONG_LONG_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_LONG_LONG_MATRIX*) malloc(sizeof(RVS_DYNAMIC_LONG_LONG_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (long long**) malloc(sizeof(long long*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (long long*) malloc(sizeof(long long) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Long Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_LONG_DOUBLE_MATRIX* rvs_dynamic_unsafe_long_double_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_LONG_DOUBLE_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_LONG_DOUBLE_MATRIX*) malloc(sizeof(RVS_DYNAMIC_LONG_DOUBLE_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (long double**) malloc(sizeof(long double*) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (long double*) malloc(sizeof(long double) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
			return NULL;
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}