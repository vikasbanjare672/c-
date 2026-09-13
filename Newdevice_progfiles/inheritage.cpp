#include <iostream>

class Animal{
    public :
        bool alive = true;
    
    void eat(){
        std::cout << "EATING YOUR FOOD\n";
    }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "BAAAWOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";
        }
};

class Cat : public Animal{
    public:
    
    void meow(){
        std::cout << "MEOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOWWWWWWWWWWWWWWWWWWWWWWW";
    }
};

int main(){

    Cat cat;
    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << '\n';

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();


    return 0;
}