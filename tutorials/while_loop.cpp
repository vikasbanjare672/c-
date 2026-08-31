#include <iostream>

int main(){
    std::string name ;

    std::cout << "Enter your sweet name: ";
    std::getline(std::cin, name);

    while (name.empty()) {
        std::cout << "Name cannot be empty yfb !!!!!! now sybau and give your character a name you fucking bitch: ";
        std::getline(std::cin, name);
    }
    std::cout << "good";
    return 0;
}