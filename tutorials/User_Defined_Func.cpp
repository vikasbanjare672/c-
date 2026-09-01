#include <iostream>

void threetime(int num){
    for(int i = 1; i <= 3; i++){
    std::cout << num << "\n";}
}

void cube(int num){
    std::cout << num * num * num << "\n";
}

void square(int num){
    std::cout << num * num << "\n";
}

int main(){
    
    square(5);
    cube(3);
    threetime(4);
    
    return 0;
}