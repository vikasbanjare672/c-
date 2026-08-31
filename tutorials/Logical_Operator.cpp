#include <iostream>

// This program demonstrates the use of logical operators in C++
// It takes two boolean inputs from the user and applies logical AND(&&), OR(||), and NOT(!) operations

int main(){
    double temp ;
    std::cout << "Enter your room Temperature in Celsius: ";
    std::cin >> temp;
    
    if(std::cin.fail()) {
        std::cout << "Invalid input! Please enter a numeric value for temperature.\n";
        return 1; // Exit the program with an error code
    }
    
    else if (temp > 25 && temp < 37) {
        std::cout << "Your room temperature is in the normal range.\n";
    }

    else if(temp >=0 && temp <=25) {
        std::cout << "Your room temperature is in COLD range.\n";
    }

    else if(temp >=37 && temp <=50) {
        std::cout << "Your room temperature is in HOT range.\n";
    }
    else if(temp < 0 || temp > 50) {
        std::cout << "Your room temperature is in EXTREME range.\n";
    }
    return 0; // Exit the program successfully
}