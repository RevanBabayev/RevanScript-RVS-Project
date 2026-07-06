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

// Checking Functions
bool rvs_file_type_check(const char*);
bool rvs_variable_name_check(const char*, const RVSMEM*, bool);
bool rvs_variable_data_check(RVSBUF*, const RVSMEM*, const RVSLGC*);
bool rvs_direct_data_check(const RVS_DIRECT_BUFFER*, const RVS_DIRECT_LOGIC*);

#endif