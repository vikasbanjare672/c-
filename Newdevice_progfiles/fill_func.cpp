#include <iostream>

int main(){
    const int SIZE = 99;
    std::string fruits[100] ;

    fill(fruits , fruits + (SIZE/3), "banana");
    fill(fruits + (SIZE/3) , fruits + (SIZE/3)*2 , "Mango");
    fill(fruits + (SIZE/3)*2, fruits + SIZE, "KIWI");

    for (std::string food : fruits){
        std::cout << food << '\n';
    }
    return 0;
}