// C Standard Libraries
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>
#include <stdint.h>

// RevanScript (RVS) Core/Engine Libraries
#include "../include/rvsmem.h"
#include "../include/rvsio.h"
#include "../include/rvslgc.h"
#include "../include/rvskey.h"
#include "../include/rvsctl.h"
#include "../include/rvserr.h"


// RevanScript (RVS) Main Data Type Check Function
bool __rvs_value_type_check(RVSBUF* const rvs_buffer, const RVSLGC* const rvs_logic, int8_t type){

    if (type == RVS_SEMANTIC_VARIABLE_TYPE){

        // No Variable Data Checking
        if (rvs_logic->rvs_variable_logic->assignment_operation_check == true && rvs_buffer->rvs_variable_buffer->variable_data[0] == '\0'){
            rvs_standard_error(RVS_VARIABLE_NO_DATA_ERROR, NULL);
            return false;
        }

        // String Type Checking
        else if (rvs_buffer->rvs_variable_buffer->variable_type == RVS_STRING_TYPE){
            if (rvs_logic->rvs_variable_logic->string_literal_check == true){
                rvs_standard_error(RVS_STRING_LITERAL_ERROR, NULL);
                return false;
            }
        }

        // (Boolean, Integer, Float and NULL) Type Checking
        else if (rvs_buffer->rvs_variable_buffer->variable_type == RVS_UNDEFINED_TYPE){
            if (strcmp(rvs_buffer->rvs_variable_buffer->variable_data, "TRUE") != 0 && strcmp(rvs_buffer->rvs_variable_buffer->variable_data, "FALSE") != 0){
                if (strcmp(rvs_buffer->rvs_variable_buffer->variable_data, "NULL") != 0){
                    if (rvs_variable_name_check(rvs_buffer->rvs_variable_buffer->variable_data, NULL, false, true) == false){
                        bool point_check = false;
                        bool minus_check = false;
                        size_t point_count = 0;

                        for (size_t i = 0; rvs_buffer->rvs_variable_buffer->variable_data[i] != '\0'; i++){
                            if (!isdigit(rvs_buffer->rvs_variable_buffer->variable_data[i])){
                                if (rvs_buffer->rvs_variable_buffer->variable_data[i] != '.'){
                                    if (rvs_buffer->rvs_variable_buffer->variable_data[0] != '-'){
                                        rvs_standard_error(RVS_VARIABLE_UNDEFINED_TYPE_ERROR, NULL);
                                        return false;
                                    }

                                    else minus_check = true;
                                }

                                else{
                                    if (minus_check == true){
                                        if (rvs_buffer->rvs_variable_buffer->variable_data[1] == '.'){
                                            rvs_standard_error(RVS_VARIABLE_UNDEFINED_TYPE_ERROR, NULL);
                                            return false;
                                        }
                                    }
                                    
                                    if (point_check == false) point_check = true;
                                    ++point_count;
                                }
                            }
                        }

                        // Float Type
                        if (point_check == true){
                            
                            // Float First Char Point Problem (Error)
                            if (rvs_buffer->rvs_variable_buffer->variable_data[0] == '.'){
                                rvs_standard_error(RVS_FLOAT_FIRST_POINT_ERROR, NULL);
                                return false;
                            }

                            if (point_count > 1){
                                rvs_standard_error(RVS_FLOAT_MULTI_POINT_ERROR, NULL);
                                return false;
                            }

                            if (rvs_buffer->rvs_variable_buffer->variable_data[strlen(rvs_buffer->rvs_variable_buffer->variable_data) - 1] == '.'){
                                rvs_standard_error(RVS_FLOAT_LAST_POINT_ERROR, NULL);
                                return false;
                            }

                            rvs_buffer->rvs_variable_buffer->variable_type = RVS_FLOAT_TYPE;
                        }

                        // Integer Type
                        else{

                            // Integer First Char Digit Zero Problem (Error)
                            if (strlen(rvs_buffer->rvs_variable_buffer->variable_data) > 1 && rvs_buffer->rvs_variable_buffer->variable_data[0] == '0'){
                                rvs_standard_error(RVS_INTEGER_FIRST_DIGIT_ZERO_ERROR, NULL);
                                return false;
                            }

                            rvs_buffer->rvs_variable_buffer->variable_type = RVS_INTEGER_TYPE;
                        }
                    }

                    // Variable Type
                    else{
                        rvs_buffer->rvs_variable_buffer->variable_type = RVS_VARIABLE_TYPE;
                    }
                }

                // NULL Type
                else{
                    rvs_buffer->rvs_variable_buffer->variable_type = RVS_NULL_TYPE;
                }
            }

            // Boolean Type (TRUE, FALSE)
            else{
                rvs_buffer->rvs_variable_buffer->variable_type = RVS_BOOLEAN_TYPE;
            }
        }
    }

    else if (type == RVS_SEMANTIC_DIRECT_TYPE){

        // No Direct Data Checking
        if (rvs_buffer->rvs_direct_buffer->direct_data_counter == 0){
            rvs_standard_error(RVS_DIRECT_NO_DATA_ERROR, NULL);
            return false;
        }
        
        // String Type Checking
        else if (rvs_buffer->rvs_direct_buffer->direct_type == RVS_STRING_TYPE){
            if (rvs_logic->rvs_direct_logic->string_literal_check == true){
                rvs_standard_error(RVS_STRING_LITERAL_ERROR, NULL);
                return false;
            }
        }

        // (Boolean, Integer, Float and NULL) Type Checking
        else if (rvs_buffer->rvs_direct_buffer->direct_type == RVS_UNDEFINED_TYPE){
            if (strcmp(rvs_buffer->rvs_direct_buffer->direct_data, "TRUE") != 0 && strcmp(rvs_buffer->rvs_direct_buffer->direct_data, "FALSE") != 0){
                if (strcmp(rvs_buffer->rvs_direct_buffer->direct_data, "NULL") != 0){
                    bool point_check = false;
                    bool minus_check = false;
                    size_t point_count = 0;

                    for (size_t i = 0; rvs_buffer->rvs_direct_buffer->direct_data[i] != '\0'; i++){
                        if (!isdigit(rvs_buffer->rvs_direct_buffer->direct_data[i])){
                            if (rvs_buffer->rvs_direct_buffer->direct_data[i] != '.'){
                                if (rvs_buffer->rvs_direct_buffer->direct_data[0] != '-'){
                                    rvs_standard_error(RVS_DIRECT_UNDEFINED_TYPE_ERROR, NULL);
                                    return false;
                                }

                                else minus_check = true;
                            }

                            else{
                                if (minus_check == true){
                                    if (rvs_buffer->rvs_direct_buffer->direct_data[1] == '.'){
                                        rvs_standard_error(RVS_DIRECT_UNDEFINED_TYPE_ERROR, NULL);
                                        return false;
                                    }
                                }
                                
                                if (point_check == false) point_check = true;
                                ++point_count;
                            }
                        }
                    }

                    // Float Type
                    if (point_check == true){
                        
                        // Float First Char Point Problem (Error)
                        if (rvs_buffer->rvs_direct_buffer->direct_data[0] == '.'){
                            rvs_standard_error(RVS_FLOAT_FIRST_POINT_ERROR, NULL);
                            return false;
                        }

                        if (point_count > 1){
                            rvs_standard_error(RVS_FLOAT_MULTI_POINT_ERROR, NULL);
                            return false;
                        }

                        if (rvs_buffer->rvs_direct_buffer->direct_data[strlen(rvs_buffer->rvs_direct_buffer->direct_data) - 1] == '.'){
                            rvs_standard_error(RVS_FLOAT_LAST_POINT_ERROR, NULL);
                            return false;
                        }

                        rvs_buffer->rvs_direct_buffer->direct_type = RVS_FLOAT_TYPE;
                    }

                    // Integer Type
                    else{

                        // Integer First Char Digit Zero Problem (Error)
                        if (strlen(rvs_buffer->rvs_direct_buffer->direct_data) > 1 && rvs_buffer->rvs_direct_buffer->direct_data[0] == '0'){
                            rvs_standard_error(RVS_INTEGER_FIRST_DIGIT_ZERO_ERROR, NULL);
                            return false;
                        }

                        rvs_buffer->rvs_direct_buffer->direct_type = RVS_INTEGER_TYPE;
                    }
                }

                // NULL Type
                else{
                    rvs_buffer->rvs_direct_buffer->direct_type = RVS_NULL_TYPE;
                }
            }

            // Boolean Type (TRUE, FALSE)
            else{
                rvs_buffer->rvs_direct_buffer->direct_type = RVS_BOOLEAN_TYPE;
            }
        }
    }

    return true;
}


bool rvs_file_type_check(const char* const file_type){
    if (strcmp(file_type, ".rvs") == 0){
        return true;
    }

    else{
        rvs_standard_error(RVS_FILE_TYPE_ERROR, NULL);
        return false;
    }
}


bool rvs_variable_name_check(
    const char* const variable_name, 
    const RVSMEM* const rvs_memory, 
    bool create_type,
    bool by_pass_value_check)
{
    if (variable_name[0] == '\0'){
        if (by_pass_value_check == false){
            rvs_standard_error(RVS_VARIABLE_NO_NAME_ERROR, NULL);
        }
        return false;
    }

    if (isdigit(variable_name[0]) != 0){
        if (by_pass_value_check == false){ 
            rvs_standard_error(RVS_VARIABLE_NAME_FIRST_CHARACTER_NUMBER_ERROR, NULL);
        }
        return false;
    }

    if (strlen(variable_name) > 30){
        if (by_pass_value_check == false){
            rvs_standard_error(RVS_VARIABLE_NAME_LENGTH_ERROR, NULL);
        }
        return false;
    }
    
    for (size_t i = 0; variable_name[i] != '\0'; i++){
        if (isalnum(variable_name[i]) == 0 && variable_name[i] != '_'){
            if (by_pass_value_check == false){
                rvs_standard_error(RVS_VARIABLE_NAME_CHARACTER_ERROR, NULL);
            }
            return false;
        }
    }

    if (create_type == true){
        if (rvs_memory_check(rvs_memory, variable_name) == true){
            if (by_pass_value_check == false){
                rvs_standard_error(RVS_VARIABLE_NAME_DUBLICATE_ERROR, NULL);
            }
            return false;
        }
    }

    for (unsigned short i = 0; i < RVS_KEYWORD_COUNT; i++){
        if (strcmp(rvs_keyword_list[i], variable_name) == 0){
            if (by_pass_value_check == false){
                rvs_standard_error(RVS_VARIABLE_NAME_KEYWORD_NAME_PROBLEM_ERROR, NULL);
            }
            return false;
        }
    }

    return true;
}


bool rvs_variable_data_check(
    RVS_VARIABLE_BUFFER* const rvs_variable_buffer, 
    const RVSMEM* const rvs_memory, 
    const RVS_VARIABLE_LOGIC* const rvs_variable_logic)
{
    RVSBUF rvs_buffer = {.rvs_variable_buffer=rvs_variable_buffer};
    RVSLGC rvs_logic = {.rvs_variable_logic=rvs_variable_logic};  

    if (__rvs_value_type_check(&rvs_buffer, &rvs_logic, RVS_SEMANTIC_VARIABLE_TYPE) == false){
        return false;
    }

    return true;
}


bool rvs_direct_data_check(
    RVS_DIRECT_BUFFER* const rvs_direct_buffer,
    const RVS_DIRECT_LOGIC* const rvs_direct_logic)
{
    RVSBUF rvs_buffer = {.rvs_direct_buffer=rvs_direct_buffer};
    RVSLGC rvs_logic = {.rvs_direct_logic=rvs_direct_logic};  
    
    if (__rvs_value_type_check(&rvs_buffer, &rvs_logic, RVS_SEMANTIC_DIRECT_TYPE) == false){
        return false;
    }

    return true;
}