#ifndef RVSPRS_H
#define RVSPRS_H

#include "rvsmem.h"
#include "rvsbuf.h"
#include "rvsexp.h"
#include "rvslgc.h"
#include "rvsio.h"


// RevanScript Variable Parser Type
typedef struct{
    RVSBUF* rvs_buffer;
    RVSEXP* rvs_expression;
    RVSLGC* rvs_logic;
} RVSPRS;


// RevanScript Direct Parser Type
typedef struct{
    RVS_DIRECT_BUFFER* rvs_direct_buffer;
    RVS_DIRECT_LOGIC* rvs_direct_logic;
} RVS_DIRECT_PARSER;


// Parser Functions 
void rvs_parser_delete(RVSPRS*);
RVSPRS* rvs_variable_parser(const char*);
RVSBUF* rvs_variable_name_parser(const char*);
RVS_DIRECT_PARSER* rvs_direct_data_parser(const char*);

#endif