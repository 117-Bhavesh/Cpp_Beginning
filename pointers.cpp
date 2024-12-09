#include <iostream>

int main() {
    // pointers = variable that stores a memory of another variable 
    //           sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator
    // the dereference operator is the unary operator *,
    // which is used to access the value of a variable at
    // a specific memory location. This process is called dereferencing.

    std::string name = "Bro";
    int age = 18;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    // to create a pointer it should be of the same data type as
    // the variable selected
    //creating a pointer to a string, so its of string data type
    std::string *pName = &name; // *p is a naming convention
    int *pAge = &age;
    std::string *pFreePizza = freePizzas;

    std::cout << *pName << '\n'; // we are accessing the value at the adress &name
    std::cout << *pAge << '\n';
    std::cout << *freePizzas << '\n';
    return 0;
}