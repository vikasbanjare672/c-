#include <iostream>
/*
int Searcharray(int array[] , int size , int element);

int main(){
    int num[] = { 1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(num)/sizeof(num[0]);
    int index ;
    int mynum;

    std::cout << "Enter element to search for : " ;
    std::cin >> mynum;

    index  = Searcharray(num , size , mynum);

    if(index != -1) {
        std::cout << mynum << " is index at " << index << '\n';
    }
    else {
        std::cout << " Element not found in array :(" ; 
    }

    return 0;
}

int Searcharray(int array[] , int size , int element){

    for (int i = 0 ; i < size ; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}   */

int Searcharray(std::string array[] , int size , std::string element);

int main(){
    std::string names[] = {"Dilip kumar gotefode" , "ajiv laudeya" , "Ajay bhosda" , "Shaurya tighteepus"};
    int size = sizeof(names)/sizeof(names[0]);
    std::string mystring;
    int index;

    std::cout << "Enter element to search for : " ;
    getline(std::cin , mystring) ;

    index = Searcharray(names , size , mystring);

    if (index != -1){
        std::cout << mystring << " is at index " << index << '\n';
    }

    else {
        std::cout << "Entered array element not found :(";
    }
    return 0;
}


int Searcharray(std::string array[] , int size , std::string element){

    for (int i = 0 ; i < size ; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}