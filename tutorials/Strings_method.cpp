#include <iostream>

int main(){
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Operation ::::::

/*  if (name.length() > 20) {
        std::cout << "Name is too long! Please enter a name with 20 characters or fewer.\n";
        return 1; // Exit the program with an error code
    }                                                              */
    if (name.empty()) {
        std::cout << "Name cannot be empty! Please enter a valid name.\n";
    }
    std::cout << "Hello " << name << "\n" ;
    std::cout << "********************************\n";
    return 0;
}