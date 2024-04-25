// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow; //cow pointer

    my_cow = new cow("Gertie", 3, cow_purpose::hide);
    //accessing members of pointed object -> dereference the pointer then access a member of the object
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    //no need parenthesis or (*my_cow.get_name)...

    delete my_cow; //delete object no longer needed to avoid memory leakage  -> calls destructor -> free dynamically allocated memory within object

    std::cout << std::endl << std::endl;
    return (0);
}
