// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo> //type inference -> creating a variable with the type that suits the value you want to assign to it -> must initialize at declaration

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rock!";

    std:: cout << "The type of a is " << typeid(a).name() << std::endl;
    std:: cout << "The type of b is " << typeid(b).name() << std::endl;
    std:: cout << "The type of c is " << typeid(c).name() << std::endl;
    std:: cout << "The type of d is " << typeid(d).name() << std::endl;
    std:: cout << "The type of e is " << typeid(e).name() << std::endl;
    std:: cout << "The type of f is " << typeid(f).name() << std::endl;
    std:: cout << "The type of g is " << typeid(g).name() << std::endl; // PKC is pointer to char

    std::cout << std::endl << std::endl;
    return (0);
}
