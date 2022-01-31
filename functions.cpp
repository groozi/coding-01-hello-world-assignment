/*********************
* Name: Graziella Buitron
* Coding 01
* Purpose: Modification of "Hello World" program to demonstrate proper use of
* header files, to use github, to explain proper coding processes, and to demonstrate command line parameters.
**********************/

#include "functions.h"

int string_length(const char *str){
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }
    return count;
}
