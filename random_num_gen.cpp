#include <iostream>


int main() {
    //pseudo-random = NOT truly random(but close)
    //within srand we need to imput a seed. commonly programmers use time as seed
    srand(time(NULL));
    //int num = rand(); will generate a random number between 0 to 32767
    int num = (rand() % 6) + 1;  //plus to exclude the 0 in result
    
    std::cout << num;

    return 0;
}