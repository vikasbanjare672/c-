#include <iostream>
#include <cmath>

int main(){
/*   double x = 4 ; 
    double y = 3 ;
    double z ;

//    z = std::max(x,y); // std::max() function returns the maximum of two values
//    z = std::min(x,y); // std::min() function returns the minimum of two values
//    z = pow(2,3);  // std::pow() function returns the value of the first argument raised to the power of the second argument
//    z = sqrt(16); // std::sqrt() function returns the square root of a number
//    z = round(3.14); // std::round() function rounds a floating-point number to the nearest integer
//    z = ceil(3.14); // std::ceil() function rounds a floating-point number up to the nearest integer
//    z = floor(3.14); // std::floor() function rounds a floating-point number down to the nearest integer
//    z = abs(-3.14); // std::abs() function returns the absolute value of a number
    std::cout << z;
    return 0;                                                                    */


    // example of calculating the hypo of the triangle using the Pythagorean theorem and a;so intergrating the pow() and sqrt() functions from the cmath library
    // and making use of the user input to get the values of a and b from the user and then calculating the value of c using the Pythagorean theorem

    double a;
    double b;
    double c;

    std::cout << "Enter the length of side a: ";
    std::cin >> a;

    std::cout << "Enter the length of side b: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    std::cout << "The length of the hypotenuse is: " << c << std::endl;
    return 0;
}