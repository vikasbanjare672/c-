#include <iostream>

// This program converts temperature from Celsius to Fahrenheit and vice versa and also from Celsius to Kelvin only and not viceversa

int main(){
    char unit;
    double temp;
    double result;

    std::cout <<"In what unit do you want to convert your temperature? (C/F/K): ";
    std::cin >> unit;

    std::cout << "Enter the temperature value: ";
    std::cin >> temp;

    if(std::cin.fail()) {
        std::cout << "Invalid input! Please enter a numeric value for temperature.\n";
        return 1; // Exit the program with an error code
    }

    if (unit == 'C' || unit == 'c') {
        result = (temp * 1.8) + 32;
    } 
    else if (unit == 'F' || unit == 'f') {
        result = (temp - 32) / 1.8;
    }
    else if (unit == 'K' || unit == 'k') {
        result = temp + 273.15;
    }
    else {
        std::cout << "Invalid unit! Please enter C, F, or K.\n";
        return 1; // Exit the program with an error code
    }
    std::cout << "The converted temperature is: " << result << "\n";
    std::cout <<"********************************\n";
    return 0; // Exit the program successfully
}