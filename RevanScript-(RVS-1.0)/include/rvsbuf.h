#ifndef RVSBUF_H
#define RVSBUF_H


// C Standard Librarys
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>


// RevanScript Buffer Variable Standard Define
#define RVS_DIRECT_BUFFER_DATA_LENGTH 2048
#define RVS_BUFFER_VARIABLE_NAME_LENGTH 2048
#define RVS_BUFFER_VARIABLE_DATA_LENGTH 2048
#define RVS_BUFFER_VARIABLE_TYPE_LENGTH 5
#define RVS_BUFFER_VARIABLE_ADDRESS_LENGTH 20


// RevanScript Main Data Types
enum{
    RVS_UNDEFINED_TYPE,
    RVS_STRING_TYPE,
    RVS_INTEGER_TYPE,
    RVS_FLOAT_TYPE,
    RVS_BOOLEAN_TYPE,
    RVS_BINARY_TYPE,
    RVS_EXPRESSION_TYPE,
    RVS_NULL_TYPE
};


// RevanScript Direct Buffer Type
typedef struct{
    char* direct_data;
    size_t direct_data_counter;
} RVS_DIRECT_BUFFER;


// RevanScript Buffer Type
typedef struct{
    char* variable_name;
    char* variable_data;
    uint8_t variable_type;
    bool variable_const;
    char* variable_address;
    size_t variable_name_counter;
    size_t variable_data_counter;
} RVSBUF;


// Variable Buffer Functions
RVS_DIRECT_BUFFER* rvs_direct_buffer_create(void);
void rvs_direct_buffer_delete(RVS_DIRECT_BUFFER*);
RVSBUF* rvs_buffer_create(void);
void rvs_buffer_delete(RVSBUF*);

#endif