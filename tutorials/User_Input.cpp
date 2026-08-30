#include <iostream>

// This program demonstrates how to take user input in C++ using the std::cin object.

int main() {
    std::string name ;
    int age;

    std::cout << "How old are you? ";
    std::cin >> age; // Taking user input and storing it in the variable 'age'
    
    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws , name); // Taking user input and storing it in the variable 'name'   

   //getline function is used to read a line of text from the input stream, including spaces.
   //The std::ws manipulator is used to consume any leading whitespace characters before reading the input.    

    std::cout << "Hello," << name << "!\n"; 
    std::cout << "You are " << age << " years old.\n";
    return 0;
}