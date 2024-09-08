#include <iostream>
#include <cmath>

int main() {
    //beginning by declaring our variables 
     double a;
     double b;
     double c;

     std::cout << "enter side A: ";
     std::cin >> a;

     std::cout << "enter side B: ";
     std::cin >> b;


     //a = pow(a ,2);
     //b = pow(b, 2);
     //c = sqrt(a + b);
     c = sqrt(pow(a, 2) + pow(b, 2));

     std::cout << "side C: " << c;



    return 0;
}