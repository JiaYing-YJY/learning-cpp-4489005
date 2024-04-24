// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; 
// global variable => accessible to all parts of the code (memory is managed statically by the compiler -> data segment of memory -> program end, their memory are freed)
// local(automatic) variables -> inside functions/loop -> accessible within their scope -> execution exits scope -> memory is freed and variables are deleted (stack segment of memory -> temporary)

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
