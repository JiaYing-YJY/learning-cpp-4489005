// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//enum constants are public, static and final (unchangeable - cannot be overridden) (variable to be a set of pre-defined constants)
enum class cow_purpose {dairy, meat, hide, pet}; //enum classes is encapsulated within a class scope, enhances type-safety, reduce potentional errors
//enum work like global variables
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};
// both enum has meat and bakery -> has two values => change to enum class => need to use scope resolution operator, double colon

int main(){
    int meat = 8; //expected behaviour to print a = 8 for multiple scopes -> local variable => assume it means the one in the scope
    /*
    int a;
    a = (int) cow_purpose::meat;
    std::cout << "a = " << a << std::endl;
    */

    cow_purpose a;
    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
