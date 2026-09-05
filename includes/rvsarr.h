#ifndef RVSARR_H
#define RVSARR_H

// C Standard Libraries
#include <stddef.h>
#include <stdbool.h>

// Signed Types

// Character Array Struct Type Implementation
typedef struct{
    char* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_CHARACTER_ARRAY;

// Integer Array Struct Type Implementation
typedef struct{
    int* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_INTEGER_ARRAY;

// Float Array Struct Type Implementation
typedef struct{
    float* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_FLOAT_ARRAY;

// Double Array Struct Type Implementation
typedef struct{
    double* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_DOUBLE_ARRAY;

// Boolean Array Struct Type Implementation
typedef struct{
    bool* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_BOOLEAN_ARRAY;

// Short Array Struct Type Implementation
typedef struct {
    short* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_SHORT_ARRAY;

// Long Array Struct Type Implementation 
typedef struct{
    long* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_LONG_ARRAY;

// Long Long Array Struct Type Implementation
typedef struct{
    long long* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_LONG_LONG_ARRAY;

// Long Double Array Struct Type Implementation
typedef struct{
    long double* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_LONG_DOUBLE_ARRAY;


// Unsigned Types


// Unsigned Character Array Struct Type Implementation
typedef struct{
    unsigned char* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY;

// Unsigned Integer Array Struct Type Implementation
typedef struct{
    unsigned int* buffer;
    size_t iterator;
    size_t capacity;    
} RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY;

// Unsigned Short Array Struct Type Implementation
typedef struct{
    unsigned short* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY;

// Unsigned Long Array Struct Type Implementation
typedef struct{
    unsigned long* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_UNSIGNED_LONG_ARRAY;

// Unsigned Long Long Array Struct Implementation
typedef struct{
    unsigned long long* buffer;
    size_t iterator;
    size_t capacity;
} RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY;


// Dynamic Unsafe (Signed) Array Create Functions
RVS_DYNAMIC_CHARACTER_ARRAY* rvs_dynamic_unsafe_character_array_create(const size_t);
RVS_DYNAMIC_INTEGER_ARRAY* rvs_dynamic_unsafe_integer_array_create(const size_t);
RVS_DYNAMIC_FLOAT_ARRAY* rvs_dynamic_unsafe_float_array_create(const size_t);
RVS_DYNAMIC_DOUBLE_ARRAY* rvs_dynamic_unsafe_double_array_create(const size_t);
RVS_DYNAMIC_BOOLEAN_ARRAY* rvs_dynamic_unsafe_boolean_array_create(const size_t);
RVS_DYNAMIC_SHORT_ARRAY* rvs_dynamic_unsafe_short_array_create(const size_t);
RVS_DYNAMIC_LONG_ARRAY* rvs_dynamic_unsafe_long_array_create(const size_t);
RVS_DYNAMIC_LONG_LONG_ARRAY* rvs_dynamic_unsafe_long_long_array_create(const size_t);
RVS_DYNAMIC_LONG_DOUBLE_ARRAY* rvs_dynamic_unsafe_long_double_array_create(const size_t);

// Dynamic Unsafe (Unsigned) Array Create Functions
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* rvs_dynamic_unsafe_unsigned_character_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* rvs_dynamic_unsafe_unsigned_integer_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* rvs_dynamic_unsafe_unsigned_short_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* rvs_dynamic_unsafe_unsigned_long_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* rvs_dynamic_unsafe_unsigned_long_long_array_create(const size_t);

// Dynamic Unsafe (Signed) Array Resize Functions
bool rvs_dynamic_unsafe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY*, const size_t);

// Dynamic Unsafe (Unsigned) Array Resize Functions
bool rvs_dynamic_unsafe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY*, const size_t);
bool rvs_dynamic_unsafe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY*, const size_t); 

// Dynamic Safe Array Create Functions
RVS_DYNAMIC_CHARACTER_ARRAY* rvs_dynamic_safe_character_array_create(const size_t);
RVS_DYNAMIC_INTEGER_ARRAY* rvs_dynamic_safe_integer_array_create(const size_t);
RVS_DYNAMIC_FLOAT_ARRAY* rvs_dynamic_safe_float_array_create(const size_t);
RVS_DYNAMIC_DOUBLE_ARRAY* rvs_dynamic_safe_double_array_create(const size_t);
RVS_DYNAMIC_BOOLEAN_ARRAY* rvs_dynamic_safe_boolean_array_create(const size_t);
RVS_DYNAMIC_SHORT_ARRAY* rvs_dynamic_safe_short_array_create(const size_t);
RVS_DYNAMIC_LONG_ARRAY* rvs_dynamic_safe_long_array_create(const size_t);
RVS_DYNAMIC_LONG_LONG_ARRAY* rvs_dynamic_safe_long_long_array_create(const size_t);
RVS_DYNAMIC_LONG_DOUBLE_ARRAY* rvs_dynamic_safe_long_double_array_create(const size_t);

// Dynamic Safe (Unsigned) Array Create Functions
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* rvs_dynamic_safe_unsigned_character_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* rvs_dynamic_safe_unsigned_integer_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* rvs_dynamic_safe_unsigned_short_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* rvs_dynamic_safe_unsigned_long_array_create(const size_t);
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* rvs_dynamic_safe_unsigned_long_long_array_create(const size_t);

// Dynamic Safe Array Resize Functions
bool rvs_dynamic_safe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY*, const size_t);
bool rvs_dynamic_safe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY*, const size_t);
bool rvs_dynamic_safe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY*, const size_t);
bool rvs_dynamic_safe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY*, const size_t);
bool rvs_dynamic_safe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY*, const size_t);
bool rvs_dynamic_safe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY*, const size_t);
bool rvs_dynamic_safe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY*, const size_t);
bool rvs_dynamic_safe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY*, const size_t);
bool rvs_dynamic_safe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY*, const size_t);

// Dynamic Safe (Unsigned) Array Resize Functions
bool rvs_dynamic_safe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY*, const size_t);
bool rvs_dynamic_safe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY*, const size_t);
bool rvs_dynamic_safe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY*, const size_t);
bool rvs_dynamic_safe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY*, const size_t);
bool rvs_dynamic_safe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY*, const size_t);

// Deallocate (Signed) Array Memory Functions
void rvs_dynamic_character_array_delete(RVS_DYNAMIC_CHARACTER_ARRAY*);
void rvs_dynamic_integer_array_delete(RVS_DYNAMIC_INTEGER_ARRAY*);
void rvs_dynamic_float_array_delete(RVS_DYNAMIC_FLOAT_ARRAY*);
void rvs_dynamic_double_array_delete(RVS_DYNAMIC_DOUBLE_ARRAY*);
void rvs_dynamic_boolean_array_delete(RVS_DYNAMIC_BOOLEAN_ARRAY*);
void rvs_dynamic_short_array_delete(RVS_DYNAMIC_SHORT_ARRAY*);
void rvs_dynamic_long_array_delete(RVS_DYNAMIC_LONG_ARRAY*);
void rvs_dynamic_long_long_array_delete(RVS_DYNAMIC_LONG_LONG_ARRAY*);
void rvs_dynamic_long_double_array_delete(RVS_DYNAMIC_LONG_DOUBLE_ARRAY*);

// Deallocate (Unsigned) Array Memory Functions
void rvs_dynamic_unsigned_character_array_delete(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY*);
void rvs_dynamic_unsigned_integer_array_delete(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY*);
void rvs_dynmaic_unsigned_short_array_delete(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY*);
void rvs_dynamic_unsigned_long_array_delete(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY*);
void rvs_dynamic_unsigned_long_long_array_delete(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY*);

#endif