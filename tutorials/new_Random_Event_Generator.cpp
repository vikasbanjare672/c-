#include <iostream>
#include <ctime>

int main(){

    // Pseudo-random number generation  =  NOT truly random, but close

    srand(time(NULL)); // Seed the random number generator with the current time

    // rolling 3 6-sided dices

    int num = rand() % 6 + 1; // Generate a random number between 1 and 6
    std::cout << "Random number : " << num << "\n"; 

    int num2 = rand() % 6 + 1; // Generate a random number between 1 and 6
    std::cout << "Random number : " << num2 << "\n"; 

    int num3 = rand() % 6 + 1;
    std::cout << "Random number : " << num3 << "\n";

    return 0;
}