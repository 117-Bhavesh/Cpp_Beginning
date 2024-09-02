#include <iostream>

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main() {
    //if we are implying an entity then we don't need to prefix it to output it.
    using namespace second;
   std::cout << x;

    return 0;
}