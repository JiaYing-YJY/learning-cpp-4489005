// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    //(setter) constructor is called when object is created (implicit) => does not specify return type, name must be same as  -> restrict access to code within the class (tweak the data freely)
    //overloading a funcion: defining a function with same name of already named function but different set of parameters -> additional set of constructor by taking custom set of parameters
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    //getter functions are not supposed to modify anything in object they get data from -> const correctness => do not have parameters and return data member with return keyboard
    std::string get_name() const {
        return name;
    } 
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
private: //hiding data from outside world
/*
public: //convert struct to class
*/
    std::string name;
    int age;
    cow_purpose purpose;
}; //by default, class members are private
//classes offer all elements of OOP

int main(){
    /*
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    */

    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
