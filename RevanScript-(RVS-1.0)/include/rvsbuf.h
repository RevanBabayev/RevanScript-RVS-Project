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


// RevanScript (RVS) Main Data Types
enum{
    RVS_UNDEFINED_TYPE,    // 1
    RVS_STRING_TYPE,       // 2
    RVS_INTEGER_TYPE,      // 3
    RVS_FLOAT_TYPE,        // 4
    RVS_BOOLEAN_TYPE,      // 5
    RVS_EXPRESSION_TYPE,   // 6
    RVS_NULL_TYPE          // 7
};


// RevanScript (RVS) Direct Buffer Type
typedef struct{
    char* direct_data;
    uint8_t direct_type;
    size_t direct_data_counter;
} RVS_DIRECT_BUFFER;


// RevanScript (RVS) Variable Buffer Type
typedef struct{
    char* variable_name;
    char* variable_data;
    uint8_t variable_type;
    bool variable_const;
    char* variable_address;
    size_t variable_name_counter;
    size_t variable_data_counter;
} RVS_VARIABLE_BUFFER;


// RevanScript (RVS) Buffer Type
typedef union{
    RVS_VARIABLE_BUFFER* rvs_variable_buffer;
    RVS_DIRECT_BUFFER* rvs_direct_buffer;
} RVSBUF;


// Variable Buffer Functions
RVS_DIRECT_BUFFER* rvs_direct_buffer_create(void);
void rvs_direct_buffer_delete(RVS_DIRECT_BUFFER*);
RVS_VARIABLE_BUFFER* rvs_buffer_create(void);
void rvs_buffer_delete(RVS_VARIABLE_BUFFER*);

#endif