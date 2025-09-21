//Modularity
//this is about dividing a program in to sub programs 
//as one would guess you would experience less errors 
//more resusability 
//and the project becomes easier to maintain 

// programming by modules in c means splitting source into a header file 
//that specifies how module talks to the clients
//and a corresponding implementation source where all the code and details are hidden.


// we will implement the example with a modular string library
//we have 3 files to this effect 
//string_utils.h declares the interface for the string utility module
//string_utils.c contains logic for the function declared in the header
//and the current one is our main file that makes use of the utility module


#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(){
    const char* str1 = "Hello";
    const char*  str2 = "World!";


    //concatenate
    char* result = string_utils_concat(str1, str2);
    if (result) {
        printf("concatenated: %s\n", result);
        free(result); 
    }


    printf("length of '%s': %d\n", str1, string_utils_length(str1));


    char str3[] = "example";
    string_utils_to_upper(str3);
    printf("Uppercase: %s\n", str3);

    return 0;
}

