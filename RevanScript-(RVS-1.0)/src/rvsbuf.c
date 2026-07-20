// C Standard Libraries
#include <stdlib.h>
#include <stdbool.h>

// RevanScript (RVS) Core / Engine Libraries
#include "../include/rvsbuf.h"


// RevanScript (RVS) Direct Data Buffer (Create Function)
RVS_DIRECT_BUFFER* rvs_direct_buffer_create(void){
    RVS_DIRECT_BUFFER* rvs_direct_buffer = (RVS_DIRECT_BUFFER*) malloc(sizeof(RVS_DIRECT_BUFFER));
    if (!rvs_direct_buffer) return NULL;
    rvs_direct_buffer->direct_data = (char*) malloc(sizeof(char) * RVS_DIRECT_BUFFER_DATA_LENGTH);
    if (!rvs_direct_buffer->direct_data){
        free(rvs_direct_buffer);
        return NULL;
    }
    rvs_direct_buffer->direct_data[0] = '\0';
    rvs_direct_buffer->direct_type = RVS_UNDEFINED_TYPE;
    rvs_direct_buffer->direct_data_counter = 0;
    return rvs_direct_buffer;
}


// RevanScript (RVS) Direct Data Buffer (Delete Function)
void rvs_direct_buffer_delete(RVS_DIRECT_BUFFER* rvs_direct_buffer){
    free(rvs_direct_buffer->direct_data);
    free(rvs_direct_buffer);
}


// RevanScript (RVS) Variable Meta-Data Buffer (Create Function)
RVS_VARIABLE_BUFFER* rvs_buffer_create(void){
    RVS_VARIABLE_BUFFER* rvs_variable_buffer = (RVS_VARIABLE_BUFFER*) malloc(sizeof(RVS_VARIABLE_BUFFER));
    if (!rvs_variable_buffer) return NULL;

    rvs_variable_buffer->variable_name = (char*) malloc(sizeof(char) * RVS_BUFFER_VARIABLE_NAME_LENGTH);
    if (!rvs_variable_buffer->variable_name){
        free(rvs_variable_buffer);
        return NULL;
    }

    rvs_variable_buffer->variable_data = (char*) malloc(sizeof(char) * RVS_BUFFER_VARIABLE_DATA_LENGTH);
    if (!rvs_variable_buffer->variable_data){
        free(rvs_variable_buffer->variable_name);
        free(rvs_variable_buffer);
        return NULL;
    }

    rvs_variable_buffer->variable_address = (char*) malloc(sizeof(char) * RVS_BUFFER_VARIABLE_ADDRESS_LENGTH);
    if (!rvs_variable_buffer->variable_address){
        free(rvs_variable_buffer->variable_name);
        free(rvs_variable_buffer->variable_data);
        free(rvs_variable_buffer);
        return NULL;
    }

    rvs_variable_buffer->variable_name[0] = '\0';
    rvs_variable_buffer->variable_data[0] = '\0';
    rvs_variable_buffer->variable_address[0] = '\0';

    rvs_variable_buffer->variable_type = RVS_UNDEFINED_TYPE;

    rvs_variable_buffer->variable_const = false;
    rvs_variable_buffer->variable_name_counter = 0;
    rvs_variable_buffer->variable_data_counter = 0;

    return rvs_variable_buffer;
}


// RevanScript (RVS) Variable Meta-Data Buffer (Delete Function)
void rvs_buffer_delete(RVS_VARIABLE_BUFFER* rvs_variable_buffer){
    free(rvs_variable_buffer->variable_name);
    free(rvs_variable_buffer->variable_data);
    free(rvs_variable_buffer->variable_address);
    free(rvs_variable_buffer);
}