#ifndef RVSSTD_H
#define RVSSTD_H

#include <stdbool.h>

#include "rvsprs.h"
#include "rvsmem.h"

RVSPRS* rvs_standard_variable(const char*, RVSMEM*, bool, bool);

#endif