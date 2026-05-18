#include <stdlib.h>

#include "../include/rvsctl.h"
#include "../include/rvslgc.h"


// RevanScript Logic Memory Create
RVSLGC* rvs_logic_create(void){
    RVSLGC* rvs_logic = (RVSLGC*) malloc(sizeof(RVSLGC));
    if (!rvs_logic) return NULL;
    rvs_logic->assignment_operation_check = false;
	rvs_logic->string_literal_check = false;
	rvs_logic->binary_start_operation_check = false;
	rvs_logic->expression_check = false;
	rvs_logic->expression_queue = RVS_UNDEFINED_QUEUE;
    return rvs_logic;
}

// RevanScript Logic Memory Delete
void rvs_logic_delete(RVSLGC* rvs_logic){
	free(rvs_logic);
}