#include <iostream>

namespace first {
    int x = 5;
}
namespace second {
    int x = 10;
}
int main(){
    int x = 15; // local variable x      Output: 15
    std::cout << x << "\n"; 
    std::cout << first::x << "\n";   // Output: 5
    std::cout << second::x << "\n";  // Output: 10
    return 0;
}

/* Namespace = provides a solution for preventing name conflicts in large projects.
               Each entity needs a unique name.A namespace allows for identically 
               named entities as long as the namespaces are different.*/