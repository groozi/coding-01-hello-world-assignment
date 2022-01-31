/*********************
* Name: Graziella Buitron
* Coding 01
* Purpose: Modification of "Hello World" program to demonstrate proper use of
* header files, to use github, to explain proper coding processes, and to demonstrate command line parameters.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    cout << "My Command Line Analyzer.." << endl;
    cout << "The number of command line parameters are: " << argc << endl;

    if(argc > 1){
        cout << "The length of the name of the program is: " << string_length(argv[0]) << endl;
    }

    for (int i=1; i < argc; i++){
        cout << "The length of parameter " << i << " is: " << string_length(argv[i]) << endl;
    }

    return 0;
}
