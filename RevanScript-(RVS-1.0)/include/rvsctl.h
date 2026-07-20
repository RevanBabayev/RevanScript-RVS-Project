#ifndef RVSCTL_H
#define RVSCTL_H

#include <stdbool.h>

#include "rvsbuf.h"
#include "rvsmem.h"
#include "rvslgc.h"

// RevanScript Expression Parser Queue Logic
enum{
    RVS_UNDEFINED_QUEUE,
    RVS_NUMBER_QUEUE,
    RVS_OPERATOR_QUEUE
};

// RevanScript (RVS) Direct and Variable Type
enum{
    RVS_SEMANTIC_DIRECT_TYPE,
    RVS_SEMANTIC_VARIABLE_TYPE
};

// Checking Functions
bool rvs_file_type_check(const char*);
bool rvs_variable_name_check(const char*, const RVSMEM*, bool);
bool rvs_variable_data_check(RVS_VARIABLE_BUFFER*, const RVSMEM*, const RVS_VARIABLE_LOGIC*);
bool rvs_direct_data_check(RVS_DIRECT_BUFFER*, const RVS_DIRECT_LOGIC*);

#endif