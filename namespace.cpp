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

   std::cout << x;

    return 0;
}