// C Standard Libraries
#include <stdlib.h>
#include <stdbool.h>

// RevanScript (RVS) Core / Engine Libraries
#include "../include/rvsarr.h"


// Signed Unsafe Array Create Functions


// RevanScript (RVS) Character Dynamic Unsafe Array Create Function
RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_unsafe_character_array_create(const size_t size){
    RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_CHARACTER_ARRAY) malloc(sizeof(char) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Integer Dynamic Unsafe Array Create Function
RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_unsafe_integer_array_create(const size_t size){
    RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_INTEGER_ARRAY) malloc(sizeof(int) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Float Dynamic Unsafe Array Create Function
RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_unsafe_float_array_create(const size_t size){
    RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_FLOAT_ARRAY) malloc(sizeof(float) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Double Dynamic Unsafe Array Create Function
RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_unsafe_double_array_create(const size_t size){
    RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_DOUBLE_ARRAY) malloc(sizeof(double) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Boolean Dynamic Unsafe Array Create Function
RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_unsafe_boolean_array_create(const size_t size){
    RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_BOOLEAN_ARRAY) malloc(sizeof(bool) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Short Dynamic Unsafe Array Create Function
RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_unsafe_short_array_create(const size_t size){
    RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_SHORT_ARRAY) malloc(sizeof(short) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_unsafe_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_LONG_ARRAY) malloc(sizeof(long) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Long Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_unsafe_long_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_LONG_LONG_ARRAY) malloc(sizeof(long long) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Long Double Dynamic Unsafe Array Create Function
RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_unsafe_long_double_array_create(const size_t size){
    RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_LONG_DOUBLE_ARRAY) malloc(sizeof(long double) * size);
    return rvs_dynamic_array;
}


// Unsigned Unsafe Array Create Functions


// RevanScript (RVS) Unsigned Character Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_unsafe_unsigned_character_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY) malloc(sizeof(unsigned char) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Integer Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_unsafe_unsigned_integer_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY) malloc(sizeof(unsigned int));
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Short Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_unsafe_unsigned_short_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY) malloc(sizeof(unsigned short) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_unsafe_unsigned_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_ARRAY) malloc(sizeof(unsigned long) * size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Unsafe Array Create Function
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_unsafe_unsigned_long_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY) malloc(sizeof(unsigned long long) * size);
    return rvs_dynamic_array;
}


// Signed Unsafe Array Resize Functions


// RevanScript (RVS) Character Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_CHARACTER_ARRAY) realloc(rvs_dynamic_array, sizeof(char) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Integer Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_INTEGER_ARRAY) realloc(rvs_dynamic_array, sizeof(int) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Float Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_FLOAT_ARRAY) realloc(rvs_dynamic_array, sizeof(float) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Double Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_DOUBLE_ARRAY) realloc(rvs_dynamic_array, sizeof(double) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Boolean Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_BOOLEAN_ARRAY) realloc(rvs_dynamic_array, sizeof(bool) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Short Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_SHORT_ARRAY) realloc(rvs_dynamic_array, sizeof(short) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Long Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_LONG_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(long long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Long Double Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_LONG_DOUBLE_ARRAY) realloc(rvs_dynamic_array, sizeof(long double) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}


// Unsigned Unsafe Array Resize Functions


// RevanScript (RVS) Unsigned Character Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned char) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Unsigned Integer Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned int) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Unsigned Short Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned short) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Unsigned Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Unsafe Array Resize Function
bool rvs_dynamic_unsafe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_array, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned long long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    return true;
}

// Signed Safe Array Create Functions


// RevanScript (RVS) Character Dynamic Safe Array Function
RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_safe_character_array_create(const size_t size){
    RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_CHARACTER_ARRAY) calloc(sizeof(char), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Integer Dynamic Safe Array Function
RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_safe_integer_array_create(const size_t size){
    RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_INTEGER_ARRAY) calloc(sizeof(int), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Float Dynamic Safe Array Function
RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_safe_float_array_create(const size_t size){
    RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_FLOAT_ARRAY) calloc(sizeof(float), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Double Dynamic Safe Array Function
RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_safe_double_array_create(const size_t size){
    RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_DOUBLE_ARRAY) calloc(sizeof(double), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Boolean Dynamic Safe Array Function
RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_safe_boolean_array_create(const size_t size){
    RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_BOOLEAN_ARRAY) calloc(sizeof(bool), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Short Dynamic Safe Array Function
RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_safe_short_array_create(const size_t size){
    RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_SHORT_ARRAY) calloc(sizeof(short), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Long Dynamic Safe Array Function
RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_safe_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_LONG_ARRAY) calloc(sizeof(long), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Long Long Dynamic Safe Array Function
RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_safe_long_long_array_create(const size_t size){
    RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_LONG_LONG_ARRAY) calloc(sizeof(long long), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Long Double Dynamic Safe Array Function
RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_safe_long_double_array_create(const size_t size){
    RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_LONG_DOUBLE_ARRAY) calloc(sizeof(long double), size);
    return rvs_dynamic_array;
}


// Unsigned Safe Array Create Function


// RevanScript (RVS) Unsigned Character Dynamic Safe Array Function
RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_safe_unsigned_character_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY) calloc(sizeof(unsigned char), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Integer Dyanmic Safe Array Function
RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_safe_unsigned_integer_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY) calloc(sizeof(unsigned int), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Short Dynamic Safe Array Function
RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_safe_unsigned_short_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY) calloc(sizeof(unsigned short), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Dynamic Safe Array Function 
RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_safe_unsigned_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_ARRAY) calloc(sizeof(unsigned long), size);
    return rvs_dynamic_array;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Safe Array Function
RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_safe_unsigned_long_long_array_create(const size_t size){
    RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_array = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY) calloc(sizeof(unsigned long long), size);
    return rvs_dynamic_array;
}


// Signed Safe Array Resize Functions


// RevanScript (RVS) Character Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_character_array_resize(RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_CHARACTER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_CHARACTER_ARRAY) realloc(rvs_dynamic_array, sizeof(char) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        size_t i = old_size; 
        for (; i < new_size; i++) rvs_dynamic_array[i] = ' ';
        rvs_dynamic_array[i] = '\0';
    }
    return true;
}

// RevanScript (RVS) Integer Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_integer_array_resize(RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_INTEGER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_INTEGER_ARRAY) realloc(rvs_dynamic_array, sizeof(int) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Float Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_float_array_resize(RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_FLOAT_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_FLOAT_ARRAY) realloc(rvs_dynamic_array, sizeof(float) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0.0;
    }
    return true;
}

// RevanScript (RVS) Double Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_double_array_resize(RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_DOUBLE_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_DOUBLE_ARRAY) realloc(rvs_dynamic_array, sizeof(double) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0.0;
    }
    return true;
}

// RevanScript (RVS) Boolean Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_boolean_array_resize(RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_BOOLEAN_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_BOOLEAN_ARRAY) realloc(rvs_dynamic_array, sizeof(bool) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = false;
    }
    return true;
}

// RevanScript (RVS) Short Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_short_array_resize(RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_SHORT_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_SHORT_ARRAY) realloc(rvs_dynamic_array, sizeof(short) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_long_array_resize(RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Long Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_long_long_array_resize(RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_LONG_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_LONG_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(long long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Long Double Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_long_double_array_resize(RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_LONG_DOUBLE_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_LONG_DOUBLE_ARRAY) realloc(rvs_dynamic_array, sizeof(long double) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0.0;
    }
    return true;
}


// Unsigned Safe Array Resize Functions


// RevanScript (RVS) Unsigned Character Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_character_array_resize(RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_CHARACTER_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned char) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        size_t i = old_size; 
        for (; i < new_size; i++) rvs_dynamic_array[i] = ' '; 
        rvs_dynamic_array[i] = '\0';
    }
    return true;
}

// RevanScript (RVS) Unsigned Integer Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_integer_array_resize(RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_INTEGER_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned int) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
} 

// RevanScript (RVS) Unsigned Short Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_short_array_resize(RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_SHORT_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned short) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Unsigned Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Unsigned Long Long Dynamic Safe Array Resize Function
bool rvs_dynamic_safe_unsigned_long_long_array_resize(RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_array, const size_t old_size, const size_t new_size){
    RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY rvs_dynamic_array_realloc = (RVS_DYNAMIC_UNSIGNED_LONG_LONG_ARRAY) realloc(rvs_dynamic_array, sizeof(unsigned long long) * new_size);
    if (!rvs_dynamic_array_realloc) return false;
    rvs_dynamic_array = rvs_dynamic_array_realloc;
    if (new_size > old_size){
        for (size_t i = old_size; i <= new_size; i++) rvs_dynamic_array[i] = 0;
    }
    return true;
}

// RevanScript (RVS) Dellocate Array Function
void rvs_dynamic_array_delete(void* dynamic_array){
    free(dynamic_array);
}
