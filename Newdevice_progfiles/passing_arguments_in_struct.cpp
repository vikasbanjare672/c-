#include <iostream>

struct phone{
    std::string model; 
    int year;
    std::string color;
};

int main(){

    phone phone1;

    phone1.model = "Apple";
    phone1.year = 2026;
    phone1.color = "HOT PINK";

    phone phone2;

    phone2.model = "Samsung";
    phone2.year = 2022;
    phone2.color = "MATTE BLACK";

    std::cout << phone1.model << '\n';
    std::cout << phone1.year << '\n';
    std::cout << phone1.color << '\n';

    std::cout << phone2.model << '\n';
    std::cout << phone2.year << '\n';
    std::cout << phone2.color << '\n';

    return 0;
}

void color();