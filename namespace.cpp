#include <iostream>



int main() {
    //if we are using namespace std we don't need to use the prefix std:: everywhere
   //however the "std namespace" has hundreds of entities, so big chance of conflict
    //there is a safer alternative to using namespace std, it will narrow down the entities to what's in our use

   using std::cout;
   using std::string;

   string name = "bro";

   cout << "hello " << name;

    return 0;
}