#include <iostream>

int main(){
    
    // foreach loop = loop that easses the traversal over an iterable data set 

    double marks[] = {90.6,89,78};
    
    for (double mark : marks){
        std::cout << mark << '\n';
    }


    return 0 ;
}