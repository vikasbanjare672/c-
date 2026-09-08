#include <iostream>

double gettotal(double prices[] , int size) ;

int main(){

    double prices[4];
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices , size);

    for( int i = 0 ; i < 5 ; i++){
        std::cout << "enter the price of "<< i+1 << " products in front of you bitch!!" << '\n';
        std::cin >> prices[i] ; 
    }
    
    std::cout << "Your total  is " << total << "$" ;

    return 0;
}

double gettotal(double prices[] , int size){
    double total = 0 ; 

    for (int i = 0 ; i < size 
        ; i++){
        total += prices[i] ; 
    }
    return total ;
}