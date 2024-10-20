#include <iostream>
void bakePizza();
void bakePizza(std::string topping1);

int main(){
    bakePizza("pepperoni");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "here is your " << topping1 << " pizza!\n";
}
//it is valid for functions to share same name but you need to have different set of parameters
//a functions name + its parameters together is known as fucntion signature
//and each function's singnature needs to be unique kind of like an ID