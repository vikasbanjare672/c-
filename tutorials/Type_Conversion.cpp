#include <iostream>
/* Type conversion  =  conversion a value of one data type to another 
     1. Implicit conversion = automatic
     2. Explicit conversion = manual */
int main(){
/*  int x = 3.19; // implicit conversion from double to int
    std::cout << x << "\n"; // output: 3
    return 0;                                                                        

    double x = (int) 3.19;  // Explicit conversion from double to int  
    std::cout << x << "\n"; // output: 3
    return 0;                                                                  */

    // example of integer division to calculate percentage 
    
    int total_marks = 100;
    int marks_obtained = 77;
    double percentage = marks_obtained/double(total_marks) * 100; // Explicit conversion from int to double
    std::cout << percentage << "%"; 
    return 0;
}
