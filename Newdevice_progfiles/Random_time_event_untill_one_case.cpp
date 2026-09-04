#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    
    srand(time(0));
    int events;
    
    do {

        events = rand() % 4 + 1;
        
        switch(events){
        case 1:
            std::cout << "fuck this shit, here we go again" << '\n';
            break;
        case 2:
            std::cout << "SORRY!! you died" << '\n';
            break;
        case 3:
            std::cout << "HEY!" << '\n';
            break;
        case 4:
            std::cout << "FAILED!!" << '\n';
            break;
        }
        std::cout << "Event: " << events << '\n';;
    
     } while (events != 2);    
     
     return 0;
}