#include <iostream>

// This program demonstrates how to take user input in C++ using the std::cin object.

int main() {
    std::string name ;
   
    std::cout << "What's your name? ";
    std::cin >> name; // Taking user input and storing it in the variable 'name'
   
    std::cout << "Hello," << name << "!\n"; 
   
    return 0;
}