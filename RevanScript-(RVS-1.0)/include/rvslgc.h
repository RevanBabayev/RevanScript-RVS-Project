#ifndef RVSLGC_H
#define RVSLGC_H

#include <stdbool.h>
#include <stdint.h>

// RevanScript Variable Logic (Variable Created Logical Variables)
typedef struct{
    bool assignment_operation_check;
	bool string_literal_check;
    bool binary_start_operation_check;
    bool expression_check;
    int8_t expression_queue;
} RVSLGC;

RVSLGC* rvs_logic_create(void);
void rvs_logic_delete(RVSLGC*);

#endif 