#include <iostream>
#include <ctime>
#include <cmath>

int main(){
    int random;
    std::string product;
    double prices[] = {599.99 , 20.50 , 100000.0 , 120000 ,0.0};


    std::cout << "Enter the product name (Available :: Face wash , Pen , Mobile , Laptop , Gyaatttt)" << '\n';
    std::cin >> product ;


    srand(time(0));
    random = rand()% 5 + 1;

    switch(random){
        case 1 :
            if (product == "facewash" || product ==  "Facewash") {
                std::cout << "You have WON Maskara" << '\n' ;
            }
            else{
                std::cout << "Sorry , Better luck next time :0" << '\n';
            }
            break;

        case 2 :
            if (product == "pen" || product == "Pen") {
                std::cout << "You have WON rubber" << '\n' ;
            }
            else{
                std::cout << "Sorry , Better luck next time :0" << '\n';
            }
            break;

        case 3 :
            if (product == "Mobile" || product == "mobile") {
                std::cout << "You have WON a EARBUD" << '\n' ;
            }
            else{
                std::cout << "Sorry , Better luck next time :0" << '\n';
            }
            break;

        case 4 :
            if (product == "laptop" || product == "Laptop") {
                std::cout << "You have WON a 5000 rupee voucher!!" << '\n' ;
            }
            else{
                std::cout << "Sorry , Better luck next time :0" << '\n';
            }
            break;

        case 5 :
            if (product == "gyat" || product == "Gyaatttt") {
                std::cout << "You have WON a baddie voucher!!" << '\n' ;
            }
            else{
                std::cout << "Sorry , Better luck next time :0" << '\n';
            }
            break;
    }

    return 0 ;
}

