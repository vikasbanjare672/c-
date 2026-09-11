#include <iostream>

struct phone{
    std::string model; 
    int year;
    std::string color;
};

void printout(phone phone);

int main(){

    phone phone1;

    phone1.model = "Apple";
    phone1.year = 2026;
    phone1.color = "HOT PINK";

    phone phone2;

    phone2.model = "Samsung";
    phone2.year = 2022;
    phone2.color = "MATTE BLACK";

    printout(phone1);
    printout(phone2);


    return 0;
}

void printout(phone phone){
    std::cout << phone.model << '\n';
    std::cout << phone.year << '\n';
    std::cout << phone.color << '\n';
    std::cout << '\n';
}