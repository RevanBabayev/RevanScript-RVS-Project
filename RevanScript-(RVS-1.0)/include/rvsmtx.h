#ifndef RVSMTX_H
#define RVSMTX_H

// C Standard Libraries
#include <stdbool.h>
#include <stddef.h>

// Type Define 
typedef char** RVS_DYNAMIC_CHARACTER_MATRIX;
typedef int** RVS_DYNAMIC_INTEGER_MATRIX;
typedef float** RVS_DYNAMIC_FLOAT_MATRIX;
typedef double** RVS_DYNAMIC_DOUBLE_MATRIX;
typedef bool** RVS_DYNAMIC_BOOLEAN_MATRIX;
typedef short** RVS_DYNAMIC_SHORT_MATRIX;
typedef long** RVS_DYNAMIC_LONG_MATRIX;
typedef long long** RVS_DYNAMIC_LONG_LONG_MATRIX;

// Matrix Size Type Define
typedef struct{
    const size_t rows;
    const size_t cols;
} RVS_MATRIX_SIZE;
 
// RevanScript (RVS) Matrix (Unsafe Create) Functions
RVS_DYNAMIC_CHARACTER_MATRIX rvs_dynamic_unsafe_character_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_INTEGER_MATRIX rvs_dynamic_unsafe_integer_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_FLOAT_MATRIX rvs_dynamic_unsafe_float_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_DOUBLE_MATRIX rvs_dynamic_unsafe_double_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_BOOLEAN_MATRIX rvs_dynamic_unsafe_boolean_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_SHORT_MATRIX rvs_dynamic_unsafe_short_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_MATRIX rvs_dynamic_unsafe_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_LONG_MATRIX rvs_dynamic_unsafe_long_long_matrix_create(const RVS_MATRIX_SIZE);

// RevanScript (RVS) Matrix (Unsafe Resize) Functions
bool rvs_dynamic_unsafe_character_matrix_resize(RVS_DYNAMIC_CHARACTER_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_integer_matrix_resize(RVS_DYNAMIC_INTEGER_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_float_matrix_resize(RVS_DYNAMIC_FLOAT_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_double_matrix_resize(RVS_DYNAMIC_DOUBLE_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_boolean_matrix_resize(RVS_DYNAMIC_BOOLEAN_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_short_matrix_resize(RVS_DYNAMIC_SHORT_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_long_matrix_resize(RVS_DYNAMIC_LONG_MATRIX, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_long_long_matrix_resize(RVS_DYNAMIC_LONG_LONG_MATRIX, const RVS_MATRIX_SIZE);

// RevanScript (RVS) Matrix (Safe Create) Functions
RVS_DYNAMIC_CHARACTER_MATRIX rvs_dynamic_safe_character_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_INTEGER_MATRIX rvs_dynamic_safe_integer_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_FLOAT_MATRIX rvs_dynamic_safe_float_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_DOUBLE_MATRIX rvs_dynamic_safe_double_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_BOOLEAN_MATRIX rvs_dynamic_safe_boolean_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_SHORT_MATRIX rvs_dynamic_safe_short_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_MATRIX rvs_dynamic_safe_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_LONG_MATRIX rvs_dynamic_safe_long_long_matrix_create(const RVS_MATRIX_SIZE);

// RevanScript (RVS) Matrix (Safe Resize) Functions
bool rvs_dynamic_safe_character_matrix_resize(RVS_DYNAMIC_CHARACTER_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_integer_matrix_resize(RVS_DYNAMIC_INTEGER_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_float_matrix_resize(RVS_DYNAMIC_FLOAT_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_double_matrix_resize(RVS_DYNAMIC_DOUBLE_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_boolean_matrix_resize(RVS_DYNAMIC_BOOLEAN_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_short_matrix_resize(RVS_DYNAMIC_SHORT_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_long_matrix_resize(RVS_DYNAMIC_LONG_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_long_long_matrix_resize(RVS_DYNAMIC_LONG_LONG_MATRIX, const RVS_MATRIX_SIZE, const RVS_MATRIX_SIZE);

// RevanScript (RVS) Matrix (Dellocate) Function
void rvs_dynamic_matrix_delete(void**);

#endif