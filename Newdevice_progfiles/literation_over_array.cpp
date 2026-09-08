#include <iostream>

int main(){

    /*std::string name[] = {

        "vikas",
        "arnav",
        "HAHA",
    }; */

    char grades[] = {'A' , 'B' ,'C' , 'D' , 'F'};

    /*for(int i = 0 ; i < sizeof(name)/sizeof(std::string); i++){
        std::cout << "Student name : " << name[i] << '\n'; */

    for(int i = 0 ; i < sizeof(grades)/sizeof(char); i++){
        std::cout << "Student grade : " << grades[i] << '\n';
    }

    return 0 ;
}