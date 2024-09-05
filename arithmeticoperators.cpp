#include <iostream>
int main()
{
    //arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

    //int students = 20;
    double students = 20;

    //students = students + 5;
    //there is a shorter way to write this
    //students+=5;
    //if we only have to add 1 we can use the increament operator
    //students++; 
    //++ is common in many loops

    //students = students - 5;
    //students-=5;
    //students--;
    
    //students = students * 5;
    //students*=5;

    //students = students / 5;
    //students/=5;

    students/=3;
    //since we used int variable the decimal portion didn't get output
    //when int replaced with double variable, decimal output possible
    std::cout << students;

    return 0;
}