
#include "main.h"

int main(int argc, char** argv) {
    cout << "My Command Line Analyzer.." << endl;
    cout << "The number of command line parameters are: " << argc << endl;

    if(argc > 1){
        cout << "The length of the name of the program is: " << string_length(argv[0]) << endl;
    }

    return 0;
}
