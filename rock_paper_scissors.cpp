#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    //after assigning the player variable lets display the user's choice
    std::cout << "Your choice: ";
    showChoice(player);

    return 0;
}
char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    
    return player;
}
char getComputerChoice(){
    return 0;
}
void showChoice(char choice){
    
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer){

}