#include <iostream>

int main(){
    //array = a data structure that can hold multiple values
    //        values are accessed by an index number
    //        "kind of like a variable that holds multiple values"

    std::string car[] = {"Supra", "Mercedes", "Audi"};
    //arrays can only contain values of same data type

    car[0] = "Mc Laren"; //a value in array can be edited too

    std::cout << car[0] << '\n'; //var name and inside [] put index number
    //0 is the default
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';


    return 0;
}