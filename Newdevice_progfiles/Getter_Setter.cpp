#include <iostream>

class Stove{
    private :
        int temperature = 0 ;

    public:
        int getTemperature(){
            return temperature;
        }
    
    void setTemperature(int temperature){
        if(temperature < 0 ){
            this->temperature = 0;
        }
        else if(temperature >= 36){
            this->temperature = 36;
        }
        else{
        this->temperature = temperature;   
        }
    }
};

// Abstraction = hiding unnecessary data from outside a class
// getter = function that make a private attribute READABLE
// setter  = functon that make a private attribute WRITABLE


int main(){

    Stove stove;

    stove.setTemperature(69);

    std::cout << stove.getTemperature() ;


    return 0;
}