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
    // the version of x in the first namespace, take that entity (first) and precede it before x.
   std::cout << first::x;
   //the two colons :: is known as "scope resolution operator"

    return 0;
}