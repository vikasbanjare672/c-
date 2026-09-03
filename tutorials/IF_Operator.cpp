#include <iostream>

int main(){
    
    /* if statement = do something if a condition is true 
                        if not , then don't do anything*/
    
    int age;
    std::cout << "Enter your age:";
    std::cin >> age;
    if (std::cin.fail()){
        std::cout << "Invalid input! Please enter a valid age." << "\n";
        return 1; // Exit the program with an error code
    }

    if (age >= 60){
        std::cout << "You are a senior citizen!.... take care of your health!.... and enjoy your life!.... you deserve itand die because you are old!!!!" ;
    }
    else if (age >= 18){
        std::cout << "Fuck 'em, you are an adult!" ;
    }
    else if (age >= 1 && age < 18){
        std::cout << "SYBAU!!!!!.........wait for a few more years!" ;
    }
    else if (age == 0){
        std::cout << "awwwww...You are a baby, you can't even read this!" ;
    }
    else if(age < 0){
        std::cout << "If you are not born yet, then how fuck can you read this?!" ;
    }
    
}