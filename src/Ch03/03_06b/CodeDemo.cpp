// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl; //address of operator
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl; //memory address where p is pointing -> indirection operator (*) -> int (declared ptr as a pointer to int) 
    std::cout << "         The address of ptr is " << &ptr << std::endl; //address of operator (&)

    std::cout << std::endl << std::endl;
    return (0);
}
