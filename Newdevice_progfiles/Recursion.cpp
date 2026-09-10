#include <iostream>

/*   *******************iteration*******************
void playpl(int num);

int main(){
    int num = 100 ;
    playpl(num);

}

void playpl(int num){
    for(int i = 0 ; i < num ; i++){
        std::cout << "Pizza" <<'\n' ; 
    }
}   
*/


/*  *******************Recursion*******************

void playpl(int num);

int main(){
    int num = 100 ;
    playpl(num);

}

void playpl(int num){
    if(num > 0){
        std::cout << "Pizza" <<'\n';
        playpl(num - 1);
    }
} 

*/

int factorial(int num);

int main(){

    int num ;
    std::cout << "Enter the number to want to know factorial of: ";
    std::cin >> num;

    std::cout << factorial(num);

    return 0 ;
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }
} 

