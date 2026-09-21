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

// Signed Unsafe Matrix Create Functions

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

// Unsigned Unsafe Matrix Create Function

// RevanScript (RVS) Unsigned Character Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX* rvs_dynamic_unsafe_unsigned_character_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (unsigned char**) malloc(sizeof(unsigned char) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (unsigned char*) malloc(sizeof(unsigned char) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Unsigned Integer Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX* rvs_dynamic_unsafe_unsigned_integer_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (unsigned int**) malloc(sizeof(unsigned int) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (unsigned int*) malloc(sizeof(unsigned int) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Unsigned Short Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX* rvs_dynamic_unsafe_unsigned_short_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (unsigned short**) malloc(sizeof(unsigned short) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (unsigned short*) malloc(sizeof(unsigned short) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Unsigned Long Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_UNSIGNED_LONG_MATRIX* rvs_dynamic_unsafe_unsigned_long_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_UNSIGNED_LONG_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_UNSIGNED_LONG_MATRIX*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_LONG_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (unsigned long**) malloc(sizeof(unsigned long) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (unsigned long*) malloc(sizeof(unsigned long) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Unsafe Matrix Create Function
RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX* rvs_dynamic_unsafe_unsigned_long_long_matrix_create(const RVS_MATRIX_SIZE size){
	RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX* __rvs_dynamic_matrix = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX));
	if (!__rvs_dynamic_matrix) return NULL;
	__rvs_dynamic_matrix->buffer = (unsigned long long**) malloc(sizeof(unsigned long long) * size.cols);
	if (!__rvs_dynamic_matrix->buffer){
		free(__rvs_dynamic_matrix);
		return NULL;
	}
	for (size_t i = 0; i < size.cols; i++){
		__rvs_dynamic_matrix->buffer[i] = (unsigned long long*) malloc(sizeof(unsigned long long) * size.rows);
		if (!__rvs_dynamic_matrix->buffer[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix->buffer[i]);
			}
		}
	}
	__rvs_dynamic_matrix->capacity = size;
	__rvs_dynamic_matrix->iterator = 0;
	return __rvs_dynamic_matrix;
}

// Signed Unsafe Matrix Resize Functions

// RevanScript (RVS) Character Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_character_matrix_resize(RVS_DYNAMIC_CHARACTER_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	char** __rvs_dynamic_matrix_realloc_cols = (char**) realloc(rvs_dynamic_matrix->buffer, sizeof(char*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (char*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(char) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Integer Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_integer_matrix_resize(RVS_DYNAMIC_INTEGER_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	int** __rvs_dynamic_matrix_realloc_cols = (int**) realloc(rvs_dynamic_matrix->buffer, sizeof(int*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (int*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(int) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Float Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_float_matrix_resize(RVS_DYNAMIC_FLOAT_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	float** __rvs_dynamic_matrix_realloc_cols = (float**) realloc(rvs_dynamic_matrix->buffer, sizeof(float*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (float*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(float) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Double Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_double_matrix_resize(RVS_DYNAMIC_DOUBLE_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	double** __rvs_dynamic_matrix_realloc_cols = (double**) realloc(rvs_dynamic_matrix->buffer, sizeof(double*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (double*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(double) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Boolean Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_boolean_matrix_resize(RVS_DYNAMIC_BOOLEAN_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	bool** __rvs_dynamic_matrix_realloc_cols = (bool**) realloc(rvs_dynamic_matrix->buffer, sizeof(bool*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (bool*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(bool) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Short Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_short_matrix_resize(RVS_DYNAMIC_SHORT_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	short** __rvs_dynamic_matrix_realloc_cols = (short**) realloc(rvs_dynamic_matrix->buffer, sizeof(short*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (short*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(short) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Long Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_long_matrix_resize(RVS_DYNAMIC_LONG_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	long** __rvs_dynamic_matrix_realloc_cols = (long**) realloc(rvs_dynamic_matrix->buffer, sizeof(long*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (long*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(long) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Long Long Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_long_long_matrix_resize(RVS_DYNAMIC_LONG_LONG_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	long long** __rvs_dynamic_matrix_realloc_cols = (long long**) realloc(rvs_dynamic_matrix->buffer, sizeof(long long*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (long long*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(long long) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Long Double Dynamic Unsafe Matrix Resize Function 
bool rvs_dynamic_unsafe_long_double_matrix_resize(RVS_DYNAMIC_LONG_DOUBLE_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	long double** __rvs_dynamic_matrix_realloc_cols = (long double**) realloc(rvs_dynamic_matrix->buffer, sizeof(long double*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (long double*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(long double) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// Unsigned Unsafe Matrix Resize Functions

// RevanScript (RVS) Unsigned Character Dynamic Unsafe Matrix Resize Function
bool rvs_dynamic_unsafe_unsigned_character_matrix_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	unsigned char** __rvs_dynamic_matrix_realloc_cols = (unsigned char**) realloc(rvs_dynamic_matrix->buffer, sizeof(unsigned char*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (unsigned char*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(unsigned char) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Unsigned Integer Dynamic Unsafe Matrix Resize Function
bool rvs_dynamic_unsafe_unsigned_integer_matrix_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	unsigned int** __rvs_dynamic_matrix_realloc_cols = (unsigned int**) realloc(rvs_dynamic_matrix->buffer, sizeof(unsigned int*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (unsigned int*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(unsigned int) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Unsigned Short Dynamic Unsafe Matrix Resize Function
bool rvs_dynamic_unsafe_unsigned_short_matrix_resize(RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	unsigned short** __rvs_dynamic_matrix_realloc_cols = (unsigned short**) realloc(rvs_dynamic_matrix->buffer, sizeof(unsigned short*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (unsigned short*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(unsigned short) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Unsigned Long Dynamic Unsafe Matrix Resize Function
bool rvs_dynamic_unsafe_unsigned_long_matrix_resize(RVS_DYNAMIC_UNSIGNED_LONG_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	unsigned long** __rvs_dynamic_matrix_realloc_cols = (unsigned long**) realloc(rvs_dynamic_matrix->buffer, sizeof(unsigned long*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (unsigned long*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(unsigned long) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Unsafe Matrix Resize Function
bool rvs_dynamic_unsafe_unsigned_long_long_matrix_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX* rvs_dynamic_matrix, RVS_MATRIX_SIZE new_size){
	unsigned long long** __rvs_dynamic_matrix_realloc_cols = (unsigned long long**) realloc(rvs_dynamic_matrix->buffer, sizeof(unsigned long long*) * new_size.cols);
	if (!__rvs_dynamic_matrix_realloc_cols) return false;
	for (size_t i = 0; i < new_size.cols; i++){
		__rvs_dynamic_matrix_realloc_cols[i] = (unsigned long long*) realloc(rvs_dynamic_matrix->buffer[i], sizeof(unsigned long long) * new_size.rows);
		if (!__rvs_dynamic_matrix_realloc_cols[i]){
			for (size_t j = 0; j < i; j++){
				free(__rvs_dynamic_matrix_realloc_cols[j]);
			}
			free(__rvs_dynamic_matrix_realloc_cols);
			return false;
		}
	}
	rvs_dynamic_matrix->buffer = __rvs_dynamic_matrix_realloc_cols;
	rvs_dynamic_matrix->capacity = new_size;
	return true;
}