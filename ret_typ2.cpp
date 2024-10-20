#include <iostream>
//creating a return type program based on string_type user_defined_function
//concat meaning: to link things together in a series or chain
std::string concatStrings(std::string nameInsignificant1, std::string nameInsignificant2);
//why does the name of the particular strings do not matter while writing them in parameters
//how is the code still working regardless of the different string name?
int main(){
    std::string firstName = "Ness";
    std::string lastName = "117";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;

    return 0;

}
std::string concatStrings(std::string nameInsignificant1, std::string nameInsignificant2){
    return nameInsignificant1 + " " + nameInsignificant2;
}