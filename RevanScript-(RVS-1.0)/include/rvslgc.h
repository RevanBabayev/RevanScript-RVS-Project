#ifndef RVSLGC_H
#define RVSLGC_H

#include <stdbool.h>
#include <stdint.h>

// RevanScript (RVS) Direct Logic Type
typedef struct{
    bool string_literal_check;
    bool binary_start_operation_check;
    bool expression_check;
    int8_t expression_queue;
} RVS_DIRECT_LOGIC;

// RevanScript (RVS) Variable Logic Type
typedef struct{
    bool assignment_operation_check;
	bool string_literal_check;
    bool binary_start_operation_check;
    bool expression_check;
    int8_t expression_queue;
} RVS_VARIABLE_LOGIC;

// RevanScript (RVS) Logic 
typedef union{
    const RVS_VARIABLE_LOGIC* const rvs_variable_logic;
    const RVS_DIRECT_LOGIC* const rvs_direct_logic;
} RVSLGC;

// RevanScript (RVS) Logic Functions
RVS_VARIABLE_LOGIC* rvs_logic_create(void);
void rvs_logic_delete(RVS_VARIABLE_LOGIC*);
RVS_DIRECT_LOGIC* rvs_direct_logic_create(void);
void rvs_direct_logic_delete(RVS_DIRECT_LOGIC*);

#endif 