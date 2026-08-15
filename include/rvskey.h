#ifndef RVSKEY_H
#define RVSKEY_H

#define RVS_KEYWORD_COUNT 10

// C Standard Libraries
#include <stdbool.h>
#include <stdint.h>

// RevanScript (RVS) Core/Engine Libraries
#include "../include/rvsmem.h"

// extern const unsigned short rvs_keywords_length[RVS_KEYWORD_COUNT];
extern const char rvs_keyword_list[RVS_KEYWORD_COUNT][4];

// RevanScript (RVS) Keywords Search Function
bool keys(const char*, RVSMEM*, bool*, const int8_t*);

#endif