// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt; // implicit type conversion/casting
    unsgn = sgn; // number will be copied as  it is (2^32 - 7)
    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << unsgn << std::endl;
    std::cout << "uint32: " << (int32_t)unsgn << std::endl; //signed 32 bit integer

    std::cout << std::endl << std::endl;
    return (0);
}
