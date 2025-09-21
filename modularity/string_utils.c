#include <stdlib.h>
#include <string.h>
#include "string_utils.h"


//helper function 

static int is_valid_string(const char* str) {
    return str != NULL;
}


char* string_utils_concat(const char* str1, const char* str2){
    if (!is_valid_string(str1) || !is_valid_string(str2)){
        return NULL;
    }

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char* result =  (char*)malloc(len1 + len2 + 1);
 
    if (!result) return NULL;

    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int string_utils_length(const char* str){
    if (!is_valid_string(str)) return -1;
    return (int)strlen(str);
}

void string_utils_to_upper(char* str){
    if (!is_valid_string(str)) return;
    for (int i = 0; str[i]; i++){
        if (str[i] >= 'a' && str[i] <= 'z') {
          str[i] = str[i] - 32;
        }
    }
}
