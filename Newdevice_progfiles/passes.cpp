#include <iostream>
/*
void swap(std::string x ,std::string y);

int main(){

    std::string x = "kool-Aid";
    std::string y = "Water";
    std::string temp;

    swap(x,y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
                                                
    return 0;
}

void swap(std::string x ,std::string y){    this is pass by value .
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}
*/

void swap(std::string &x ,std::string &y);

int main(){

    std::string x = "kool-Aid";
    std::string y = "Water";
    std::string temp;

    swap(x,y);
    
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';   

    return 0;
}

void swap(std::string &x ,std::string &y){        //this is pass by reference (should use this more than pass by value)
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}