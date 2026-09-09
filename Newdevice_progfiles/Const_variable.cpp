#include <iostream>

void printInfo( const std::string &name , const int &age );

int main(){

    std::string name = "Bilwa BILAI";
    int age = 29 ; 

    printInfo(name , age);

    return 0;
}

void printInfo( const std::string &name , const int &age ){

    name ;
    age ;

    std::cout << "Your Name is : " << name ;
    std::cout << "Your Age is : " << age ;
}


// const parameter = parameter that is effectively read-only
//                   code is more secure & conveys intent
//                   useful for references and pointers