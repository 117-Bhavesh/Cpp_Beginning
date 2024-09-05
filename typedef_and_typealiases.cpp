#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//_t is conventionally used to represent the use of namedef
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {
    /* typedef = reserved keyword used to create an additional name (alias) for another data type.
    New identifier for an existiong tpe. 
    Helps witg tge readability and reducesstypos.
    Use when there is a clear beneit.
    Replaced with 'using' (work better w/ template).
    */

     text_t firstname = "Ness";
     number_t age = 18;

     std::cout << firstname << '\n';
     std::cout << age << '\n';

     return 0;
}