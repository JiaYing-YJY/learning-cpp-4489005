// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Please enter your name: " << std::endl;
    std::string str;
    std::cin >> str; // cin only works for single words
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
