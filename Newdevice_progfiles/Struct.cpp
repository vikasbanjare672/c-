#include <iostream>

//  Struct =  a struct (structure) is a user-defined data type that allows you to group multiple
//            related variables of different data types into a single, cohesive unit. 
//            The individual variables inside a struct are referred to as members or fields
//            Members can be access with . "Class Member Access Operator"

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
    
    student student1;
    student1.name = "spongebob";
    student1.gpa = 8.0;
    student1.enrolled = true;

    student student2;
    student2.name = "Pushkar";
    student2.gpa = 4.1;
    student2.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    
    std::cout << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}