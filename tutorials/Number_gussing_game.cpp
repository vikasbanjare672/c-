#include <iostream>

int main(){
    int num;
    int guess;
    int tries;
    
    srand(time(0)); // Seed the random number generator with the current time)
    num = rand() % 100 + 1; // Generate a random number between 1 and 100

    std::cout << "******** Number Guessing Game! ********" << "\n";

    for (tries = 1; tries <= 3; tries++) {
        
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;

        if (guess < 1 || guess > 100) {
            std::cout << "Invalid input! Please enter a number between 1 and 100." << "\n";
            tries--; // Don't count this as a valid try
            continue;
        } 
        
        else if(tries == 3 && guess != num) {
            std::cout << "Sorry! You've used all your tries. The correct number was " << num << "." << "\n";
        }
        
        else if(num == guess) {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries." << "\n";
            break;
        }
        
        else if(guess != num) {
            std::cout << "Wrong guess! Try again." << "\n";   
        }    
        }
    return 0;
    }



