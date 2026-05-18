#ifndef RVSPRS_H
#define RVSPRS_H

#include "rvsmem.h"
#include "rvsbuf.h"
#include "rvsexp.h"
#include "rvslgc.h"


// RevanScript Parser Type
typedef struct{
    RVSBUF* rvs_buffer;
    RVSEXP* rvs_expression;
    RVSLGC* rvs_logic;
} RVSPRS;


// RevanScript Input/Output Type
typedef char RVSIO;


// Parser Functions 
void rvs_parser_delete(RVSPRS*);
RVSPRS* rvs_variable_parser(const char*, RVSMEM*);
RVSBUF* rvs_variable_name_parser(const char*);
RVSIO* rvs_direct_string_parser(const char*);

#endif