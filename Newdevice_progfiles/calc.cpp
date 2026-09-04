#include  <iostream>
#include  <cmath>

int main(){
    char op;
    double num1;
    double num2;

    std::cout << "*******************************************************" << '\n';
    
    std::cout << "What kind of operation do you want to perform ? (+ , - , * , / , ^ , % , sqrt) :";
    std::cin >> op;
    
    std::cout << "Enter First number: ";
    std::cin >> num1;
    std::cout << "Enter Second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            std::cout << num1 + num2 << '\n';
            break;
        case '-':
            std::cout << num1 - num2 << '\n';
            break;
        case '*':
            std::cout << num1 * num2 << '\n';
            break;
        case '/':
            std::cout << num1 / num2 << '\n';
            break;
        case '^':
            std::cout << std::pow(num1, num2) << '\n';
            break;
        case '%':
            std::cout << std::fmod(num1 , num2) << '\n';
            break;
        case 's':
            std::cout << "Square root of " << num1 << " is " << std::sqrt(num1) << '\n';
            std::cout << "Square root of " << num2 << " is " << std::sqrt(num2) << '\n';
            break;
        default:
            std::cout << "Invalid operator" << '\n';
            break;
    }
    std::cout << "*******************************************************" << '\n';
}