#ifndef RVSERR_H
#define RVSERR_H

// RevanScript (RVS) Error Messages
#define RVS_FLAG_TITLE_ERROR                              "%s[RVSFlagTitleError] : The command with the name \"%s\" does not exist.%s\n"
#define RVS_FILE_TYPE_ERROR                               "%s[RVSFileTypeError] : The file extension must be .rvs!%s\n"
#define RVS_FILE_PATH_OR_NAME_ERROR                       "%s[RVSFilePathOrNameError] : The file name or path is incorrect!%s\n"
#define RVS_KEYWORD_NAME_ERROR                            "%s[RVSKeywordNameError] : The keyword %s is not defined!%s\n"
#define RVS_STRING_LITERAL_ERROR                          "%s[RVSStringLiteralError] : String literal is not closed!%s\n"
#define RVS_INTEGER_FIRST_DIGIT_ZERO_ERROR                "%s[RVSIntegerFirstDigitZeroError] : Multi-digit numbers in the integer type cannot start with zero!%s\n"
#define RVS_FLOAT_FIRST_POINT_ERROR                       "%s[RVSFloatFirstPointError] : A float number cannot start with a dot!%s\n"
#define RVS_FLOAT_MULTI_POINT_ERROR                       "%s[RVSFloatMultiPointError] : Float type cannot have more than one period!%s\n"
#define RVS_FLOAT_LAST_POINT_ERROR                        "%s[RVSFloatLastPointError] : Float type cannot be terminated with a period!%s\n"
#define RVS_BINARY_TYPE_ERROR                             "%s[RVSBinaryTypeError] : In binary number type, digits must consist of 0 or 1!%s\n"
#define RVS_VARIABLE_UNDEFINED_TYPE_ERROR                 "%s[RVSVariableUndefinedTypeError] : An undefined data type has been assigned to a variable!%s\n"
#define RVS_VARIABLE_NO_NAME_ERROR                        "%s[RVSVariableNoNameError] : There is no variable name!%s\n"
#define RVS_VARIABLE_NAME_FIRST_CHARACTER_NUMBER_ERROR    "%s[RVSVariableNameFirstCharacterNumberError] : The first character of a variable name cannot start with a digit!%s\n"
#define RVS_VARIABLE_NAME_LENGTH_ERROR                    "%s[RVSVariableNameLengthError] : The variable length must not exceed 30 characters!%s\n"
#define RVS_VARIABLE_NAME_CHARACTER_ERROR                 "%s[RVSVariableNameCharacterError] : A variable name can consist of letters, numbers, and underscores!%s\n"
#define RVS_VARIABLE_NAME_DUBLICATE_ERROR                 "%s[RVSVariableNameDublicateError] : The same variable name cannot be assigned to more than one variable!%s\n"
#define RVS_VARIABLE_NO_DATA_ERROR                        "%s[RVSVariableNoDataError] : The variable has not been assigned a value!%s\n"
#define RVS_VARIABLE_CONSTANT_ERROR                       "%s[RVSVariableConstantError] : It is impossible to change a constant variable!%s\n"
#define RVS_VARIABLE_UNDEFINED_ERROR                      "%s[RVSVariableUndefinedError] : The variable named \"%s\" does not exist!%s\n"
#define RVS_VARIABLE_NAME_KEYWORD_NAME_PROBLEM_ERROR      "%s[RVSVariableNameKeywordNameProblemError] : Variable names cannot be the same as keyword names!%s\n"
#define RVS_DIRECT_NO_DATA_ERROR                          "%s[RVSDirectNoDataError] : No direct data was given!%s\n"

#endif