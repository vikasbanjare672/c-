#include <iostream>

// return = return a value back to the spot where you called the function from

double square(double num);
double cube(double num);

int main(){
    double length = 10.0;
    double area = square(length);
    std::cout << "Area of square is: " << area << '\n';

    double volume = cube(length);
    std::cout << "Volume of cube is: " << volume << '\n';

    return 0;
}

double square(double num){
    return num*num;
}

double cube(double num){
    return num*num*num;
}