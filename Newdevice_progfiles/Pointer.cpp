#include <iostream>

int main(){

    std::string name = "Pushkar" ;
    int age = 13;
    std::string pizza[5] = {"pizza1" ,"pizza2", "pizza3" ,"pizza4" ,"pizza5"};

    std::string *pName = &name;
    int *pAge = &age ; 
    std::string *pPizza = pizza ;

    std::cout << pName << '\n' ;
    std::cout << pAge << '\n' ;
    std::cout << pPizza[0] << '\n' ;


    return 0;
}