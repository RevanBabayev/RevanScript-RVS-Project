#ifndef RVSLGC_H
#define RVSLGC_H

#include <stdbool.h>
#include <stdint.h>

// RevanScript Direct Data Logic 
typedef struct{
    bool string_literal_check;
    bool binary_start_operation_check;
    bool expression_check;
    int8_t expression_queue;
} RVS_DIRECT_LOGIC;

// RevanScript Variable Logic (Variable Created Logical Variables)
typedef struct{
    bool assignment_operation_check;
	bool string_literal_check;
    bool binary_start_operation_check;
    bool expression_check;
    int8_t expression_queue;
} RVSLGC;

// RevanScript (RVS) Logic Functions
RVSLGC* rvs_logic_create(void);
void rvs_logic_delete(RVSLGC*);
RVS_DIRECT_LOGIC* rvs_direct_logic_create(void);
void rvs_direct_logic_delete(RVS_DIRECT_LOGIC*);

#endif 