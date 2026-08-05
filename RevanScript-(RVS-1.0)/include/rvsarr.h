#ifndef RVSARR_H
#define RVSARR_H

// C Standard Libraries
#include <stddef.h>
#include <stdbool.h>

// Type Define Dynamic Array 
typedef char* RVS_DYNAMIC_CHARACTER_ARRAY;
typedef int* RVS_DYNAMIC_INTEGER_ARRAY;
typedef float* RVS_DYNAMIC_FLOAT_ARRAY;
typedef double* RVS_DYNAMIC_DOUBLE_ARRAY;
typedef bool* RVS_DYNAMIC_BOOLEAN_ARRAY;
typedef short* RVS_DYNAMIC_SHORT_ARRAY;
typedef long* RVS_DYNAMIC_LONG_ARRAY;
typedef long long* RVS_DYNAMIC_LONG_LONG_ARRAY;
typedef long double* RVS_DYNAMIC_LONG_DOUBLE_ARRAY;

// Unsigned Type Define Dynamic Array
typedef unsigned char* RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY;
typedef unsigned int* RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY;
typedef unsigned short* RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY;
typedef unsigned long* RVS_DYNAMIC_UNSIGNED_LONG_ARRAY;
typedef unsigned long long* RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY;

// Dynamic Unsafe (Signed) Array Create Functions
RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_unsafe_character_array_create(const size_t);
RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_unsafe_integer_array_create(const size_t);
RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_unsafe_float_array_create(const size_t);
RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_unsafe_double_array_create(const size_t);
RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_unsafe_boolean_array_create(const size_t);
RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_unsafe_short_array_create(const size_t);
RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_unsafe_long_array_create(const size_t);
RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_unsafe_long_long_array_create(const size_t);
RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_unsafe_long_double_array_create(const size_t);

// Dynamic Unsafe (Unsigned) Array Create Functions
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_unsafe_unsigned_character_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_unsafe_unsigned_integer_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_unsafe_unsigned_short_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_unsafe_unsigned_long_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_unsafe_unsigned_long_long_array_create(const size_t);

// Dynamic Unsafe (Signed) Array Resize Functions
bool rvs_dynamic_unsafe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY, const size_t);
bool rvs_dynamic_unsafe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY, const size_t);
bool rvs_dynamic_unsafe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY, const size_t);
bool rvs_dynamic_unsafe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY, const size_t);
bool rvs_dynamic_unsafe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY, const size_t);
bool rvs_dynamic_unsafe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY, const size_t);
bool rvs_dynamic_unsafe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY, const size_t);
bool rvs_dynamic_unsafe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY, const size_t);
bool rvs_dynamic_unsafe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY, const size_t);

// Dynamic Unsafe (Unsigned) Array Resize Functions
bool rvs_dynamic_unsafe_unsigned_character_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY, const size_t);
bool rvs_dynamic_unsafe_unsigned_integer_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY, const size_t);
bool rvs_dynamic_unsafe_unsigned_short_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY, const size_t);
bool rvs_dynamic_unsafe_unsigned_long_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY, const size_t);
bool rvs_dynamic_unsafe_unsigned_long_long_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY, const size_t); 

// Dynamic Safe Array Create Functions
RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_safe_character_array_create(const size_t);
RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_safe_integer_array_create(const size_t);
RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_safe_float_array_create(const size_t);
RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_safe_double_array_create(const size_t);
RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_safe_boolean_array_create(const size_t);
RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_safe_short_array_create(const size_t);
RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_safe_long_array_create(const size_t);
RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_safe_long_long_array_create(const size_t);
RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_safe_long_double_array_create(const size_t);

// Dynamic Safe (Unsigned) Array Create Functions
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_safe_unsigned_character_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_safe_unsigned_integer_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_safe_unsigned_short_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_safe_unsigned_long_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_safe_unsigned_long_long_array_create(const size_t);

// Dynamic Safe Array Resize Functions
bool rvs_dynamic_safe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY, const size_t, const size_t);

// Dynamic Safe (Unsigned) Array Resize Functions
bool rvs_dynamic_safe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY, const size_t, const size_t);
bool rvs_dynamic_safe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY, const size_t, const size_t);

// Dellocate Array Memory
void rvs_dynamic_array_delete(void*);

#endif