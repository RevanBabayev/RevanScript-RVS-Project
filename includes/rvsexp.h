#ifndef RVSEXP_H
#define RVSEXP_H

#include <stddef.h>
#include <stdbool.h>

#include "rvsbuf.h"

#define RVS_EXPRESSION_NUMS_SIZE 2048


// RevanScript Expression Buffer Memory
typedef struct{
    char* ops;    // Operations Buffer
    char** nums;  // Numbers Buffer
    size_t ops_counter;  // Operations Counter
    size_t nums_counter; // Numbers Counter
    size_t char_counter; // Characters Counter
} RVSEXP;


RVSEXP* rvs_expression_create(void);
bool rvs_expression_process(const RVSEXP*, RVS_VARIABLE_BUFFER*);
void rvs_expression_delete(RVSEXP*);

#endif