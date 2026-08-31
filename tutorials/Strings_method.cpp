#include <iostream>

int main(){
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Operations ::::::

/*  if (name.length() > 20) {
        std::cout << "Name is too long! Please enter a name with 20 characters or fewer.\n";
        return 1; // Exit the program with an error code
    }                                                              */
/*  if (name.empty()) {
        std::cout << "Name cannot be empty! Please enter a valid name.\n";
        }                                                           */
//  name.append(" is a good person");
//  name.insert(0, "Mr.");
//  name.replace(0, 2, "Ms.");
    name.erase(0, 2); // Erase the first two characters of the name
    std::cout << "Hello " << name << "\n" ;
    std::cout << "********************************\n";
    return 0;
}