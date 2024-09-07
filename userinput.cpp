#include <iostream>

//cout << (insertion operator)
// cin >> (extraction operator)
//>> is called extraction operator and << is called insertion operator

int main()
{
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "what's your name?: ";
    //but te string variable doesn't take 'space' as input
    //std::cin >> name;
    //but this can be fixed by using getline
    //if you need to accept any string that includes any spaces, use getline function
    std::getline(std::cin >> std::ws, name);
    //this space problem for \n can be fixed by adding std::ws
    //this function will remove any 'white spaces' before any user input
    
    /*
    but there is a problem if we enter the cin function followed by getline function,
     it takes /n new line function as input.
    */
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";
    
    return 0;
}