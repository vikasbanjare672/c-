#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "this person is Eating";
        }

        void drink(){
            std::cout << "this person is Drinking";
        }

        void sleep(){
            std::cout << "this person is Sleeping";
        }
};

int main(){

    Human human1;

    human1.name = "Vikas";
    human1.occupation = "Game dev";
    human1.age = 19;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.sleep();

    Human human2;
    human2.name = "Rick";
    human2.occupation = "Scientist";
    human2.age = 56;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';



    return 0;
}