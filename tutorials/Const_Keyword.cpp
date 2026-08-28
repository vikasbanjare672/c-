#include <iostream>

int main(){
    //const keyword is used to declare a variable as constant, meaning its value cannot be changed after initialization.
    
    const double RADIUS = 2; // radius is a constant integer with a value of 10
    const double PI = 3.14159; // Pi is a constant double with a value of 3.14159
    double circumference = 2 * PI * RADIUS; // circumference is calculated using the constant values of pi and radius
   
    std::cout << RADIUS << "\n";
    std::cout << PI << "\n";
    std::cout << circumference << "\n";

    return 0;
}
