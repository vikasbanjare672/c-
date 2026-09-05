#include <iostream>
#include <ctime>

//  Array = a data structure that can hold multiple values 
//          values are accessed by an index number
//          "kind of like a variable that holds multiple values but all the values are have to be same data type"

char array_st(std::string name[3]);

int main(){
    
    std::string laptop_bands[] = {"HP", "Lenovo", "dell"};

/*  std::cout << laptop_bands[1] << '\n';
    std::cout << laptop_bands[0] << '\n';
    std::cout << laptop_bands[2] << '\n';  */

    array_st( laptop_bands );

    return 0;
}

char array_st(std::string name[3]){

    std::string name1;
    std::cout << "Enter your name :";
    std::cin >> name1 ;

    srand(time(0));

    int ran = rand() % 3 ;
    

    switch(ran){
        case 0 :
        std::cout << "You MUST have this " << name[0] << " laptop , " << name1 << '\n';
        break;

        case 1 :
        std::cout << "You MUST have this " << name[2] << " laptop , " << name1 <<'\n';
        break;

        case 2 :
        std::cout << "You MUST have this " << name[1] << " laptop , " << name1 <<'\n';
        break;

        default : std::cout << " invalid BHAI!!!!!!!!!" << '\n' ;

    }
    return 0;
}