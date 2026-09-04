#include <iostream>

//  Array = a data structure that can hold multiple values 
//          values are accessed by an index number
//          "kind of like a variable that holds multiple values but all the values are have to be same data type"


int main(){
    
    std::string laptop_bands[] = {"HP", "Lenovo", "dell"};
    std::cout << laptop_bands[1];
    std::cout << laptop_bands[0] << '\n';
}