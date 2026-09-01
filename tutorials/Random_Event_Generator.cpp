#include <iostream>
#include <ctime>

int main(){

    srand(time(0)); 

    int random_event = rand() % 5 + 1; // Generate a random number between 1 and 5

    switch (random_event)
    {
    case 1:
        std::cout << "HE DIED BECAUDE OF YOUUUUU!!!!\n";
        break;
    case 2:
        std::cout << "ohh...he died..but not because of you....\n";
        break;
    case 3:
        std::cout << "ohh...he survived.\n";
        break;
    case 4:
        std::cout << "SYBAU AND GET MOVING YOU PIECE OF FUCKING SHIT\n";
        break;
    case 5:
        std::cout << "CONGRAGULATIONS! YOU AND HER GOT MARRIED!\n";
        break;

    default:
        break;
    }
    return 0;
}