#include <iostream>

int main(){
    // do wile lopp = do some block of code frist,
    // then check the condition, if the condition is true, repeat the loop again

    int number;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number < 0);
    std::cout << "Your number is : " << number;

    return 0;
}