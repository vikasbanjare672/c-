#include <iostream>

int num = 5;          // global variable = defined outside the function

void printnum();          // function prototype

int main(){

    int num = 1;         // local variable = defined inside the function
    std::cout << num << '\n';    

    std::cout << ::num << '\n';    // :: = scope resolution operator , which is used to access the global variable when there is a local variable with the same name

    printnum();          // function call
    return 0;
}

void printnum(){
    int num = 3;          // local variable = defined inside the function
    std::cout << num << '\n';

    std::cout << ::num << '\n';    // :: = scope resolution operator , which is used to access the global variable when there is a local variable with the same name
}