#include <iostream>
#include <iomanip>//there is a function in here to set precision for floating numbers
/*
creating a banking program in which we can 
deposit, withdraw and show balance.
*/
//creating user_defined_functions for the different tasks
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    //we will use the switch to determine if the user wants to make a deposit, withdrawl, check balance or exit
    
    do{
        std::cout << "..................\n";
        std::cout << "Enter your choice:\n";
        std::cout << "..................\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();//will reset any error flags
        fflush(stdin);//this will clear the input buffer
        //once we hit enter we have a new line character 
        //in or input buffer so we just need to flush that 
        //and get rid of it

        switch(choice){
            case 1: showBalance(balance);//invoking showBalance function
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for visiting!\n";
                    break;
            default:std::cout << "Invalid choice\n";
        }
    }while(choice !=4);//while choice doesnt equal to 4. program exits when pressed 4
    //do all this while some condition is true
    return 0;
}
void showBalance(double balance){
        std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n'; //for 2 decimal places std::setprecision(2)
}
double deposit(){

    double amount = 0;//local variable amount

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0)
    {
        return amount;
    }
    else{
        std::cout << "That's not a valid amount: \n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance){
        std::cout << "Insuficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}