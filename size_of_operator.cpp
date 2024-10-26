#include <iostream>

int main(){
    //sizeof() = determines the size in bytes of a:
    //           variable, data type, class, objects, etc.

    std::string name = "ness";
    //syntax:
    //       sizeof(variable-name)

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(std::string) << " bytes\n";
    //the address of where the string is located is 32bytes regardless of what is written inside it
    //its cause string is reference data type

    double gpa = 10;
    char grade = 'F'; //each char takes 1 byte
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E',};
    std::string students[] = {"amit", "bhavesh", "chinu", "danish", "erin",};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(students) << " bytes\n";
    std::cout << sizeof(students)/sizeof(grades) << " bytes\n";



    return 0;
}