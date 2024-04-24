// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;

    char array_str1[25] = "Hey guys! "; //sequence of ASCII characters terminated by 0
    char array_str2[] = "What's up? ";

    std::string std_str1 =  "Hi everybody! ";
    std::string std_str2 =  "How's the going? ";

    //concatenation for the two different implementations
    strncat(array_str1, array_str2, LENGTH1); //size of destination string = LENGTH1
    //this function modifies the first string
    std::cout << array_str1 << std::endl;

    //Operator overloading -> redefine the operation performed by an existing operator
    std::cout << std_str1 + std_str2 << std::endl; 
    // + -> simple addition for numbers but concatenation for strings
    // none of the operants gets modified

    std::cout << std::endl << std::endl;
    return (0);
}
