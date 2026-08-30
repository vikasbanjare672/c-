#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1 , num2;
    double result;
    std::cout << "***********CALCULATOR***********\n";
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '-':   
            result = num1 - num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << "\n";
            break;
        default:
            std::cout << "Invalid operator!";
    }
    std::cout << "********************************\n";
}