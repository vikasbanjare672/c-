#include <iostream>

class student{
    public:
        std::string name;
        int age;
        double gpa;
    
    student(std::string name , int age , double gpa){
        this-> name = name;
        this-> age = age;
        this-> gpa =gpa ;
    }
};

int main(){

    // Construtor = A constructor is a special member function of a class that is automatically executed
    //              whenever a new object of that class is created (instantiated). 
    //              Its primary purpose is to initialize the object's data members and
    //              allocate necessary resources.

    student student1("BITCH" , 45 , 3.25);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    return 0 ;
}