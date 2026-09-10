#include <iostream>

// dynamic memory = Memory that is allocated after the program
//                  is already compiled & running.
//                  Use the 'new' operator to allocate memory in the heap rather than the stack

//                  Useful when we don't know how much memory we will need. Makes our programs more flexible,
//                  especially when accepting user input.   

int main(){

    int *pNum = NULL ; 
    std::string *pName = NULL;
    int size;

    std::cout << "How many many name to enter : ";
    std::cin >> size;

    pNum = new int ;
    pName = new std::string[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter Name " << i + 1 << " :";
        std::cin >> pName[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << "Entered Names are folowing ::" ;
        std::cout << pName[i] << '\n';
    }
    delete[] pName;

    *pNum = 21;

    std::cout << "Address : " << pNum << '\n';
    std::cout << "Value : " << *pNum << '\n';

    delete pNum;


    return 0;
}