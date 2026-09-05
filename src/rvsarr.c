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

// RevanScript (RVS) Core / Engine Libraries
#include "../includes/rvsarr.h"

// Signed Unsafe Array Create Functions

// RevanScript (RVS) Character Dynamic Unsafe Array Create Function
RVS_DYNAMIC_CHARACTER_ARRAY* rvs_dynamic_unsafe_character_array_create(const size_t size){
    RVS_DYNAMIC_CHARACTER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_CHARACTER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_CHARACTER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (char*) malloc(sizeof(char) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Integer Dynamic Unsafe Array Create Function
RVS_DYNAMIC_INTEGER_ARRAY* rvs_dynamic_unsafe_integer_array_create(const size_t size){
    RVS_DYNAMIC_INTEGER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_INTEGER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_INTEGER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (int*) malloc(sizeof(int) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Float Dynamic Unsafe Array Create Function
RVS_DYNAMIC_FLOAT_ARRAY* rvs_dynamic_unsafe_float_array_create(const size_t size){
    RVS_DYNAMIC_FLOAT_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_FLOAT_ARRAY*) malloc(sizeof(RVS_DYNAMIC_FLOAT_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (float*) malloc(sizeof(float) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Double Dynamic Unsafe Array Create Function
RVS_DYNAMIC_DOUBLE_ARRAY* rvs_dynamic_unsafe_double_array_create(const size_t size){
    RVS_DYNAMIC_DOUBLE_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_DOUBLE_ARRAY*) malloc(sizeof(RVS_DYNAMIC_DOUBLE_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (double*) malloc(sizeof(double) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Boolean Dynamic Unsafe Array Create Function
RVS_DYNAMIC_BOOLEAN_ARRAY* rvs_dynamic_unsafe_boolean_array_create(const size_t size){
    RVS_DYNAMIC_BOOLEAN_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_BOOLEAN_ARRAY*) malloc(sizeof(RVS_DYNAMIC_BOOLEAN_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (bool*) malloc(sizeof(bool) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Short Dynamic Unsafe Array Create Function
RVS_DYNAMIC_SHORT_ARRAY* rvs_dynamic_unsafe_short_array_create(const size_t size){
    RVS_DYNAMIC_SHORT_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_SHORT_ARRAY*) malloc(sizeof(RVS_DYNAMIC_SHORT_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (short*) malloc(sizeof(short) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_LONG_ARRAY* rvs_dynamic_unsafe_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (long*) malloc(sizeof(long) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Long Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_LONG_LONG_ARRAY* rvs_dynamic_unsafe_long_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_LONG_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (long long*) malloc(sizeof(long long) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Long Double Dynamic Unsafe Array Create Function
RVS_DYNAMIC_LONG_DOUBLE_ARRAY* rvs_dynamic_unsafe_long_double_array_create(const size_t size){
    RVS_DYNAMIC_LONG_DOUBLE_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_LONG_DOUBLE_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_DOUBLE_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (long double*) malloc(sizeof(long double) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}


// Unsigned Unsafe Array Create Functions


// RevanScript (RVS) Unsigned Character Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* rvs_dynamic_unsafe_unsigned_character_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned char*) malloc(sizeof(unsigned char) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Integer Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* rvs_dynamic_unsafe_unsigned_integer_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned int*) malloc(sizeof(unsigned int) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Short Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* rvs_dynamic_unsafe_unsigned_short_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned short*) malloc(sizeof(unsigned short) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* rvs_dynamic_unsafe_unsigned_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned long*) malloc(sizeof(unsigned long) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* rvs_dynamic_unsafe_unsigned_long_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned long long*) malloc(sizeof(unsigned long long) * size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}


// Signed Unsafe Array Resize Functions


// RevanScript (RVS) Character Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY* rvs_dynamic_array, const size_t new_size){
    char* __rvs_dynamic_array_realloc = (char*) realloc(rvs_dynamic_array->buffer, sizeof(char) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Integer Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY* rvs_dynamic_array, const size_t new_size){
    int* __rvs_dynamic_array_realloc = (int*) realloc(rvs_dynamic_array->buffer, sizeof(int) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Float Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY* rvs_dynamic_array, const size_t new_size){
    float* __rvs_dynamic_array_realloc = (float*) realloc(rvs_dynamic_array->buffer, sizeof(float) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Double Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY* rvs_dynamic_array, const size_t new_size){
    double* __rvs_dynamic_array_realloc = (double*) realloc(rvs_dynamic_array->buffer, sizeof(double) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Boolean Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY* rvs_dynamic_array, const size_t new_size){
    bool* __rvs_dynamic_array_realloc = (bool*) realloc(rvs_dynamic_array->buffer, sizeof(bool) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Short Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY* rvs_dynamic_array, const size_t new_size){
    short* __rvs_dynamic_array_realloc = (short*) realloc(rvs_dynamic_array->buffer, sizeof(short) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    long* __rvs_dynamic_array_realloc = (long*) realloc(rvs_dynamic_array->buffer, sizeof(long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Long Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    long long* __rvs_dynamic_array_realloc = (long long*) realloc(rvs_dynamic_array->buffer, sizeof(long long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Long Double Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY* rvs_dynamic_array, const size_t new_size){
    long double* __rvs_dynamic_array_realloc = (long double*) realloc(rvs_dynamic_array->buffer, sizeof(long double) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}


// Unsigned Unsafe Array Resize Functions


// RevanScript (RVS) Unsigned Character Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned char* __rvs_dynamic_array_realloc = (unsigned char*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned char) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Integer Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned int* __rvs_dynamic_array_realloc = (unsigned int*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned int) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Short Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned short* __rvs_dynamic_array_realloc = (unsigned short*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned short) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned long* __rvs_dynamic_array_realloc = (unsigned long*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned long long* __rvs_dynamic_array_realloc = (unsigned long long*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned long long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// Signed Safe Array Create Functions


// RevanScript (RVS) Character Dynamic Safe Array Function
RVS_DYNAMIC_CHARACTER_ARRAY* rvs_dynamic_safe_character_array_create(const size_t size){
    RVS_DYNAMIC_CHARACTER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_CHARACTER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_CHARACTER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (char*) calloc(sizeof(char), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0; 
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Integer Dynamic Safe Array Function
RVS_DYNAMIC_INTEGER_ARRAY* rvs_dynamic_safe_integer_array_create(const size_t size){
    RVS_DYNAMIC_INTEGER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_INTEGER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_INTEGER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (int*) calloc(sizeof(int), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Float Dynamic Safe Array Function
RVS_DYNAMIC_FLOAT_ARRAY* rvs_dynamic_safe_float_array_create(const size_t size){
    RVS_DYNAMIC_FLOAT_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_FLOAT_ARRAY*) malloc(sizeof(RVS_DYNAMIC_FLOAT_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (float*) calloc(sizeof(float), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0; 
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Double Dynamic Safe Array Function
RVS_DYNAMIC_DOUBLE_ARRAY* rvs_dynamic_safe_double_array_create(const size_t size){
    RVS_DYNAMIC_DOUBLE_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_DOUBLE_ARRAY*) malloc(sizeof(RVS_DYNAMIC_DOUBLE_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (double*) calloc(sizeof(double), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Boolean Dynamic Safe Array Function
RVS_DYNAMIC_BOOLEAN_ARRAY* rvs_dynamic_safe_boolean_array_create(const size_t size){
    RVS_DYNAMIC_BOOLEAN_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_BOOLEAN_ARRAY*) malloc(sizeof(RVS_DYNAMIC_BOOLEAN_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (bool*) calloc(sizeof(bool), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Short Dynamic Safe Array Function
RVS_DYNAMIC_SHORT_ARRAY* rvs_dynamic_safe_short_array_create(const size_t size){
    RVS_DYNAMIC_SHORT_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_SHORT_ARRAY*) malloc(sizeof(RVS_DYNAMIC_SHORT_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (short*) calloc(sizeof(short), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Long Dynamic Safe Array Function
RVS_DYNAMIC_LONG_ARRAY* rvs_dynamic_safe_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (long*) calloc(sizeof(long), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Long Long Dynamic Safe Array Function
RVS_DYNAMIC_LONG_LONG_ARRAY* rvs_dynamic_safe_long_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_LONG_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (long long*) calloc(sizeof(long long), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Long Double Dynamic Safe Array Function
RVS_DYNAMIC_LONG_DOUBLE_ARRAY* rvs_dynamic_safe_long_double_array_create(const size_t size){
    RVS_DYNAMIC_LONG_DOUBLE_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_LONG_DOUBLE_ARRAY*) malloc(sizeof(RVS_DYNAMIC_LONG_DOUBLE_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (long double*) calloc(sizeof(long double), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}


// Unsigned Safe Array Create Function


// RevanScript (RVS) Unsigned Character Dynamic Safe Array Function
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* rvs_dynamic_safe_unsigned_character_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned char*) calloc(sizeof(unsigned char), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Integer Dyanmic Safe Array Function
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* rvs_dynamic_safe_unsigned_integer_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned int*) calloc(sizeof(unsigned int), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Short Dynamic Safe Array Function
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* rvs_dynamic_safe_unsigned_short_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned short*) calloc(sizeof(unsigned short), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Dynamic Safe Array Function 
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* rvs_dynamic_safe_unsigned_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned long*) calloc(sizeof(unsigned long), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Safe Array Function
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* rvs_dynamic_safe_unsigned_long_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* __rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY*) malloc(sizeof(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY));
    if (!__rvs_dynamic_array) return NULL;
    __rvs_dynamic_array->buffer = (unsigned long long*) calloc(sizeof(unsigned long long), size);
    if (!__rvs_dynamic_array->buffer){
        free(__rvs_dynamic_array);
        return NULL;
    }
    __rvs_dynamic_array->capacity = size;
    __rvs_dynamic_array->iterator = 0;
    return __rvs_dynamic_array;
}


// Signed Safe Array Resize Functions


// RevanScript (RVS) Character Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY* rvs_dynamic_array, const size_t new_size){
    char* __rvs_dynamic_array_realloc = (char*) realloc(rvs_dynamic_array->buffer, sizeof(char) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        size_t i = rvs_dynamic_array->capacity; 
        for (; i < new_size; i++) rvs_dynamic_array->buffer[i] = ' ';
        rvs_dynamic_array->buffer[i] = '\0';
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Integer Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY* rvs_dynamic_array, const size_t new_size){
    int* __rvs_dynamic_array_realloc = (int*) realloc(rvs_dynamic_array->buffer, sizeof(int) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Float Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY* rvs_dynamic_array, const size_t new_size){
    float* __rvs_dynamic_array_realloc = (float*) realloc(rvs_dynamic_array->buffer, sizeof(float) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0.0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Double Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY* rvs_dynamic_array, const size_t new_size){
    double* __rvs_dynamic_array_realloc = (double*) realloc(rvs_dynamic_array, sizeof(double) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0.0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Boolean Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY* rvs_dynamic_array, const size_t new_size){
    bool* rvs_dynamic_array_realloc = (bool*) realloc(rvs_dynamic_array, sizeof(bool) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = false;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Short Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY* rvs_dynamic_array, const size_t new_size){
    short* __rvs_dynamic_array_realloc = (short*) realloc(rvs_dynamic_array->buffer, sizeof(short) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    long* __rvs_dynamic_array_realloc = (long*) realloc(rvs_dynamic_array->buffer, sizeof(long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Long Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    long long* __rvs_dynamic_array_realloc = (long long*) realloc(rvs_dynamic_array->buffer, sizeof(long long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Long Double Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY* rvs_dynamic_array, const size_t new_size){
    long double* __rvs_dynamic_array_realloc = (long double*) realloc(rvs_dynamic_array->buffer, sizeof(long double) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0.0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}


// Unsigned Safe Array Resize Functions


// RevanScript (RVS) Unsigned Character Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned char* __rvs_dynamic_array_realloc = (unsigned char*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned char) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        size_t i = rvs_dynamic_array->capacity; 
        for (; i < new_size; i++) rvs_dynamic_array->buffer[i] = ' '; 
        rvs_dynamic_array->buffer[i] = '\0';
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Integer Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned int* __rvs_dynamic_array_realloc = (unsigned int*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned int) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
} 

// RevanScript (RVS) Unsigned Short Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned short* __rvs_dynamic_array_realloc = (unsigned short*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned short) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned long* __rvs_dynamic_array_realloc = (unsigned long*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* rvs_dynamic_array, const size_t new_size){
    unsigned long long* __rvs_dynamic_array_realloc = (unsigned long long*) realloc(rvs_dynamic_array->buffer, sizeof(unsigned long long) * new_size);
    if (!__rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array->buffer = __rvs_dynamic_array_realloc;
    if (new_size > rvs_dynamic_array->capacity){
        for (size_t i = rvs_dynamic_array->capacity; i <= new_size; i++) rvs_dynamic_array->buffer[i] = 0;
    }
    rvs_dynamic_array->capacity = new_size;
    return true;
}


// Deallocate Array Functions


// RevanScript (RVS) Deallocate Character Array Function
void rvs_dynamic_character_array_delete(RVS_DYNAMIC_CHARACTER_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Integer Array Function
void rvs_dynamic_integer_array_delete(RVS_DYNAMIC_INTEGER_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Float Array Function
void rvs_dynamic_float_array_delete(RVS_DYNAMIC_FLOAT_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Double Array Function
void rvs_dynamic_double_array_delete(RVS_DYNAMIC_DOUBLE_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Boolean Array Function
void rvs_dynamic_boolean_array_delete(RVS_DYNAMIC_BOOLEAN_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Short Array Function
void rvs_dynamic_short_array_delete(RVS_DYNAMIC_SHORT_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Long Array Function
void rvs_dynamic_long_array_delete(RVS_DYNAMIC_LONG_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Long Long Array Function
void rvs_dyanmic_long_long_array_delete(RVS_DYNAMIC_LONG_LONG_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Long Double Array Function
void rvs_dynamic_long_double_array_delete(RVS_DYNAMIC_LONG_DOUBLE_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}


// Unsigned Type Deallocate


// RevanScript (RVS) Deallocate Unsigned Character Array Function
void rvs_dynamic_unsigned_character_array_delete(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Unsigned Integer Array Function
void rvs_dynamic_unsigned_integer_array_delete(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Unsigned Short Array Function
void rvs_dynamic_unsigned_short_array_delete(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Unsigned Long Array Function 
void rvs_dynamic_unsigned_long_array_delete(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);
}

// RevanScript (RVS) Deallocate Unsigned Long Long Array Function
void rvs_dynamic_unsigned_long_long_array_delete(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY* dynamic_array){
    free(dynamic_array->buffer);
    free(dynamic_array);    
}
