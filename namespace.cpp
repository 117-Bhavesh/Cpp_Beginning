#include <iostream>

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main() {
    /* Namespace = provies a solution for preventing name conflicts in large
    projects. Each entity needs a unique name. A namespace allows for indentically named 
    entities as long as the namespaces are different.
    */

   int x = 0;
    // the version of x in the second namespace, take that entity (second) and precede it before x.
   std::cout << second::x;
   //just outputing the value of x is known as local version

    return 0;
}