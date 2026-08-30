#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1 , num2;
    double result;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << result;
            break;
        case '-':   
            result = num1 - num2;
            std::cout << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << result;
            break;
        default:
            std::cout << "Invalid operator!";
    }
}