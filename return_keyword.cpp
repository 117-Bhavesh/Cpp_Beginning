#include <iostream>
//syntax: funtion_type user_function_name(data_type value/variable);
double square(double length);
double cube(double length);

int main(){
    //return = return a value back to the spot
    //         where you called the encompassing function
    double length;
    std::cout << "enter the length of the sides: ";
    std::cin >> length;
    double area = square(length);
    double volume = cube(length);

    std::cout << "area: " << area << " cm^2\n";
    std::cout << "volume: " << volume << " cm^3\n";

    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}