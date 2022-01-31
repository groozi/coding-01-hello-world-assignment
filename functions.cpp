/*********************
* Name: Graziella Buitron
* Coding 01
* Purpose: Hello World Program
**********************/

#include "functions.h"

int string_length(const char *str){
	int count = 0;

	while(str[count] != '\0'){
        count++;
	}
	return count;
}
