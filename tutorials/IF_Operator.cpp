#include <iostream>

int main(){
    
    /* if statement = do something if a condition is true 
                        if not , then don't do anything*/
    
    int age;
    std::cout << "Enter your age:";
    std::cin >> age;

    if (age >= 60){
        std::cout << "You are a senior citizen!.... take care of your health!.... and enjoy your life!.... you deserve it!!!!" ;
    }
    else if (age >= 18){
        std::cout << "Fuck 'em, you are an adult!" ;
    }
    else if (age >= 1 && age < 18){
        std::cout << "SYBAU!!!!!........., wait for a few more years!" ;
    }
    else if (age ==0){
        std::cout << "awwwww...You are a baby, you can't even read this!" ;
    }
    else{
        std::cout << "Invalid age entered!" ;
    }
    
}