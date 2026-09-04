#include <iostream>

// Function Overloading = having multiple functions with the same name but different parameters

void playgame();
void playgame(std::string name);
void playgame(std::string name, int level);

int main(){
    playgame();
    playgame("LAbubu LAbubu");
    playgame("LAbubu LAbubu", 5);
    return 0;
}

void playgame(){
    std::cout << "Player Playing Game!!!" << '\n';
}

void playgame(std::string name){
    std::cout << "Player is playing " << name << " Game!!!" << '\n';
}

void playgame(std::string name, int level){
    std::cout << "Player is playing " << name << " Game at level " << level << "!!!" << '\n';

    if (level <= 5){
        std::cout << "Your player is too fucking weak!!!" << '\n';
    }
}