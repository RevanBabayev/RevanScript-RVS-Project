#ifndef RVSMTX_H
#define RVSMTX_H

// C Standard Libraries
#include <stdbool.h>
#include <stddef.h>

// Type Implementations

// Signed Types

// Matrix Size Type Implementation
typedef struct{
    size_t rows;
    size_t cols;
} RVS_MATRIX_SIZE;

// Character Matrix Struct Type Implementation
typedef struct {
    char** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_CHARACTER_MATRIX;

// Integer Matrix Struct Type Implementation
typedef struct {
    int** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_INTEGER_MATRIX;

// Float Matrix Struct Type Implementation
typedef struct{
    float** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_FLOAT_MATRIX;

// Double Matrix Struct Type Implementation
typedef struct{
    double** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_DOUBLE_MATRIX;

// Boolean Matrix Struct Type Implementation
typedef struct{
    bool** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_BOOLEAN_MATRIX;

// Short Matrix Struct Type Implementation
typedef struct{
    short** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_SHORT_MATRIX;

// Long Matrix Struct Type Implementation
typedef struct{
    long** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_LONG_MATRIX;

// Long Long Matrix Struct Type Implementation
typedef struct{
    long long** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_LONG_LONG_MATRIX;

// Long Double Matrix Struct Type Implementation
typedef struct{
    long double** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_LONG_DOUBLE_MATRIX;


// Unsigned Types


// Unsigned Character Struct Type Implementation
typedef struct{
    unsigned char** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX;

// Unsigned Integer Struct Type Implementation
typedef struct{
    unsigned int** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX;

// Unsigned Short Struct Type Implementation
typedef struct{
    unsigned short** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX;

// Unsigned Long Struct Type Implementation
typedef struct{
    unsigned long** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_UNSIGNED_LONG_MATRIX;

// Unsigned Long Long Struct Type Implementation
typedef struct{
    unsigned long long** buffer;
    size_t iterator;
    RVS_MATRIX_SIZE capacity;
} RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX;


// Dynamic Unsafe (Signed) Matrix Create Functions
RVS_DYNAMIC_CHARACTER_MATRIX* rvs_dynamic_unsafe_character_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_INTEGER_MATRIX* rvs_dynamic_unsafe_integer_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_FLOAT_MATRIX* rvs_dynamic_unsafe_float_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_DOUBLE_MATRIX* rvs_dynamic_unsafe_double_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_BOOLEAN_MATRIX* rvs_dynamic_unsafe_boolean_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_SHORT_MATRIX* rvs_dynamic_unsafe_short_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_MATRIX* rvs_dynamic_unsafe_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_LONG_MATRIX* rvs_dynamic_unsafe_long_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_DOUBLE_MATRIX* rvs_dynamic_unsafe_long_double_matrix_create(const RVS_MATRIX_SIZE);

// Dynamic Unsafe (Unsigned) Array Create Functions
RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX* rvs_dynamic_unsafe_unsigned_character_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX* rvs_dynamic_unsafe_unsigned_integer_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX* rvs_dynamic_unsafe_unsigned_short_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_LONG_MATRIX* rvs_dynamic_unsafe_unsigned_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX* rvs_dynamic_unsafe_unsigned_long_long_matrix_create(const RVS_MATRIX_SIZE);

// Dynamic Unsafe (Signed) Array Resize Functions
bool rvs_dynamic_unsafe_character_matrix_resize(RVS_DYNAMIC_CHARACTER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_integer_matrix_resize(RVS_DYNAMIC_INTEGER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_float_matrix_resize(RVS_DYNAMIC_FLOAT_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_double_matrix_resize(RVS_DYNAMIC_DOUBLE_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_boolean_matrix_resize(RVS_DYNAMIC_BOOLEAN_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_short_matrix_resize(RVS_DYNAMIC_SHORT_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_long_matrix_resize(RVS_DYNAMIC_LONG_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_long_long_matrix_resize(RVS_DYNAMIC_LONG_LONG_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_long_double_matrix_resize(RVS_DYNAMIC_LONG_DOUBLE_MATRIX*, const RVS_MATRIX_SIZE);

// Dynamic Unsafe (Unsigned) Array Resize Functions
bool rvs_dynamic_unsafe_unsigned_character_matrix_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_unsigned_integer_matrix_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_unsigned_short_matrix_resize(RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_unsigned_long_matrix_resize(RVS_DYNAMIC_UNSIGNED_LONG_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_unsafe_unsigned_long_long_matrix_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX*, const RVS_MATRIX_SIZE); 

// Dynamic Safe Array Create Functions
RVS_DYNAMIC_CHARACTER_MATRIX* rvs_dynamic_safe_character_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_INTEGER_MATRIX* rvs_dynamic_safe_integer_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_FLOAT_MATRIX* rvs_dynamic_safe_float_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_DOUBLE_MATRIX* rvs_dynamic_safe_double_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_BOOLEAN_MATRIX* rvs_dynamic_safe_boolean_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_SHORT_MATRIX* rvs_dynamic_safe_short_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_MATRIX* rvs_dynamic_safe_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_LONG_MATRIX* rvs_dynamic_safe_long_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_LONG_DOUBLE_MATRIX* rvs_dynamic_safe_long_double_matrix_create(const RVS_MATRIX_SIZE);

// Dynamic Safe (Unsigned) Array Create Functions
RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX* rvs_dynamic_safe_unsigned_character_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX* rvs_dynamic_safe_unsigned_integer_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX* rvs_dynamic_safe_unsigned_short_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_LONG_MATRIX* rvs_dynamic_safe_unsigned_long_matrix_create(const RVS_MATRIX_SIZE);
RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX* rvs_dynamic_safe_unsigned_long_long_matrix_create(const RVS_MATRIX_SIZE);

// Dynamic Safe Array Resize Functions
bool rvs_dynamic_safe_character_matrix_resize(RVS_DYNAMIC_CHARACTER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_integer_matrix_resize(RVS_DYNAMIC_INTEGER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_float_matrix_resize(RVS_DYNAMIC_FLOAT_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_double_matrix_resize(RVS_DYNAMIC_DOUBLE_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_boolean_matrix_resize(RVS_DYNAMIC_BOOLEAN_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_short_matrix_resize(RVS_DYNAMIC_SHORT_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_long_matrix_resize(RVS_DYNAMIC_LONG_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_long_long_matrix_resize(RVS_DYNAMIC_LONG_LONG_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_long_double_matrix_resize(RVS_DYNAMIC_LONG_DOUBLE_MATRIX*, const RVS_MATRIX_SIZE);

// Dynamic Safe (Unsigned) Array Resize Functions
bool rvs_dynamic_safe_unsigned_character_matrix_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_unsigned_integer_matrix_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_unsigned_short_matrix_resize(RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_unsigned_long_matrix_resize(RVS_DYNAMIC_UNSIGNED_LONG_MATRIX*, const RVS_MATRIX_SIZE);
bool rvs_dynamic_safe_unsigned_long_long_matrix_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX*, const RVS_MATRIX_SIZE);

// Deallocate (Signed) Array Memory Functions
void rvs_dynamic_character_array_delete(RVS_DYNAMIC_CHARACTER_MATRIX*);
void rvs_dynamic_integer_array_delete(RVS_DYNAMIC_INTEGER_MATRIX*);
void rvs_dynamic_float_array_delete(RVS_DYNAMIC_FLOAT_MATRIX*);
void rvs_dynamic_double_array_delete(RVS_DYNAMIC_DOUBLE_MATRIX*);
void rvs_dynamic_boolean_array_delete(RVS_DYNAMIC_BOOLEAN_MATRIX*);
void rvs_dynamic_short_array_delete(RVS_DYNAMIC_SHORT_MATRIX*);
void rvs_dynamic_long_array_delete(RVS_DYNAMIC_LONG_MATRIX*);
void rvs_dynamic_long_long_array_delete(RVS_DYNAMIC_LONG_LONG_MATRIX*);
void rvs_dynamic_long_double_array_delete(RVS_DYNAMIC_LONG_DOUBLE_MATRIX*);

// Deallocate (Unsigned) Array Memory Functions
void rvs_dynamic_unsigned_character_array_delete(RVS_DYNAMIC_UNSIGNED_CHARACTER_MATRIX*);
void rvs_dynamic_unsigned_integer_array_delete(RVS_DYNAMIC_UNSIGNED_INTEGER_MATRIX*);
void rvs_dynmaic_unsigned_short_array_delete(RVS_DYNAMIC_UNSIGNED_SHORT_MATRIX*);
void rvs_dynamic_unsigned_long_array_delete(RVS_DYNAMIC_UNSIGNED_LONG_MATRIX*);
void rvs_dynamic_unsigned_long_long_array_delete(RVS_DYNAMIC_UNSIGNED_LONG_LONG_MATRIX*);

#endif