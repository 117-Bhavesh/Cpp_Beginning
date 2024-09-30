#include <iostream>


int main() {
    //pseudo-random = NOT truly random(but close)
    //within srand we need to imput a seed. commonly programmers use time as seed
    srand(time(NULL));
    //int num = rand(); will generate a random number between 0 to 32767
    int num1 = (rand() % 6) + 1;  //plus to exclude the 0 in result
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    return 0;
}