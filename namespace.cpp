#include <iostream>



int main() {
    //if we are using namespace std we don't need to use the prefix std:: everywhere
   //however the std namespace has hundreds of entities, so big chance of conflict


   using namespace std;

   string name = "bro";

   cout << "hello " << name;

    return 0;
}