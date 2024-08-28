#include <iostream>

int main() {

    //integer (whole number)
    int age = 18;
    int year = 2024;
    int days = 7.7;
    
    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character
    char grade = 'A';
    char initial = 'B';

    //boolean (a variable thats boolean has only two states, true (1) or false(0)) 
    bool student = false;
    bool power = true;
    bool forsale = true;

    //string (objects that represnt a sequence of text)
    std::string name = "ness";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    //string literal where we literally print a string, keep in mind for the spaces though
    //followed by a variable here
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    

    return 0;
}