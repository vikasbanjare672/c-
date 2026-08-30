#include <iostream>

// Switch statement = a statement that allows a variable to be tested for equality against a list of values
// Each value is called a case, and the variable being switched on is checked for each case 

int main(){
    int day;
    std::cout << "This program will tell you the day of the week chronically based on the number you enter (1-7)." << "\n";
    std::cout << "Enter a number between 1 and 7: ";
    std::cin >> day;

    switch(day){
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Invalid input! Please enter a number between 1 and 7.";
    }
    return 0;
}