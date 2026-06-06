#ifndef RVSTBL_H
#define RVSTBL_H


// C Standard Libararys
#include <stddef.h>


// RevanScript Table Configures
struct RVSTBLConfig{
    size_t rows;
    size_t cols;
    size_t width;
    size_t height;
};


// RevanScript (RVS) Table Structure
typedef struct{
    struct RVSTBLConfig config;
    char** datas;
    size_t length;
    size_t iter;
} RVSTBL;


// RevanScript (RVS) Table Functions
RVSTBL* rvs_table_create(const struct RVSTBLConfig);
bool rvs_table_insert(RVSTBL* rvs_table, const char* const data);
void rvs_table_delete(RVSTBL*);

#endif