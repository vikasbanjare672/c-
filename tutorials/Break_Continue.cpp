#include <iostream>

//Break and Continue statements are used to control the flow of loops in C++. 
//The break statement is used to exit a loop prematurely, 
//while the continue statement is used to skip the current iteration of a loop and move on to the next iteration.

int main(){
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip the rest of the loop body when i is equal to 5
        }
        if (i==10){
            break; // Exit the loop when i is equal to 10
        }
        std::cout << i << " ";
    }
    return 0;
}