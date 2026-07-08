#ifndef RVSIO_H
#define RVSIO_H

// C Standard Librarys
#include <stdbool.h>
#include <stdint.h>

// RevanScript (RVS) Core / Engine Librarys
#include "rvstbl.h"

// RevanScript (RVS) Execution Mode
enum {RVS_FILE_MODE, RVS_REPL_MODE};

// RevanScript Input/Output Type
typedef union{
    char* output_buffer;
    char* input_buffer;
} RVSIO_Buffer;

// RevanScript (RVS) Colors / Escape Sequances
#define RVS_COLOR_BLACK_ESCAPE_CODE     "\033[30m"
#define RVS_COLOR_RED_ESCAPE_CODE       "\033[31m"
#define RVS_COLOR_GREEN_ESCAPE_CODE     "\033[32m"
#define RVS_COLOR_YELLOW_ESCAPE_CODE    "\033[33m"
#define RVS_COLOR_BLUE_ESCAPE_CODE      "\033[34m"
#define RVS_COLOR_MAGENTA_ESCAPE_CODE   "\033[35m"
#define RVS_COLOR_CYAN_ESCAPE_CODE      "\033[36m"
#define RVS_COLOR_WHITE_ESCAPE_CODE     "\033[37m"
#define RVS_COLOR_RESET_ESCAPE_CODE     "\033[0m"

// RevanScript (RVS) REPL Message
#define RVS_REPL_MESSAGE   "RevanScript (RVS) Programming Language \nRead Eval Print Loop (REPL)"

// RevanScript (RVS) Info Messages
#define RVS_VARIABLE_CONSTANT_INFO                        "%s[RVSVariableConstantInfo] : The variable you want to make constant is a constant.%s\n"

// RevanScript I/O Functions
void rvs_standard_output(const RVSIO_Buffer*, const int8_t*);
void rvs_standard_table_output(const RVSTBL*);
void rvs_standard_input(RVSIO_Buffer*, const int8_t*);
void rvs_standard_debug(bool, const char*);
void rvs_standard_info(const char*);
void rvs_standard_error(const char*, const char*);

#endif