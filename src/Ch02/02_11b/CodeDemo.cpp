// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);
    //expressions always convert the types of their values to the largest type present

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int) weight) * 10000) << std::endl; // float -> approximations with small error
    std::cout << "Fractional part: " << (double)((weight - (int) weight) * 10000) << std::endl; //better approximations with doubles

    std::cout << std::endl << std::endl;
    return (0);
}
