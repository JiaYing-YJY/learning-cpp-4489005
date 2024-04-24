// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4 //macro has no scope

//preprocessor directives do not need a semicolon

int main(){
    const size_t AGE_LENGTH = 4; //recommended alternative to macro
    //size_t useful when dealing with arrays and memory blocks, as sizes can never be negative
    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.90}; //auto does not work for arrays so type must be specified

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;
    std::cout << "The Age array has " << AGE_LENGTH << " elements." << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << std::endl;
    std::cout << "Temp[1] = " << temperature[1] << std::endl;
    std::cout << "Temp[2] = " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
