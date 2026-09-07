#include <iostream>

// sizeof() = determines the size in byte of a : variable , data type , class , objects ,etc.

int main(){

    double gpa = 2.5;
    std::string name = "Vikas";
    char grade = 'F';
    char grade_option[] = { 'A' , 'B' , 'C' , 'D' , 'E' , 'F'}; 
    bool student = true;
    std::string students[ ] = {"Vikas" , "Rishabh" , "Pushkar"};
 
    std::cout << sizeof(gpa) << " bytes\n" ;
    std::cout << sizeof(name) << " bytes\n" ;
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(gpa)/double(sizeof(grade_option)) << " Fuck i give about gpa :)\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " Students present\n";

    return 0;
}