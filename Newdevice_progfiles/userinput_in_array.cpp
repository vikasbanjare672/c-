#include <iostream>

int main(){

    std::string names[5];
    int size = sizeof(names)/sizeof(names[0]);
    
    for(int i = 0 ; i < size ; i++ ){

        std::cout << "Enter " << i + 1 << " name : ";
        std::getline(std::cin , names[i]);
        
    }
    std::cout << "following Names were given by you :\n" ;

    for(std::string name : names){
        std::cout << name << '\n';
    }

    return 0;
}