// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> //insert reference file into code 
#include <string>
#include <cstdint> //C code
#define CAPACITY 5000 //find and replace (macro definitions)
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG 
//checks for the existence of macro definitions
//If the identifier specified is defined as a macro, the lines of code that immediately follow the condition are passed on to the compiler
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small;
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
