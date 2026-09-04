#include <iostream>
#include <cstdlib>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showchoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    
    char playerChoice, computerChoice;
    playerChoice = getUserChoice();
    computerChoice = getComputerChoice();
    showchoice(playerChoice);
    showchoice(computerChoice);
    chooseWinner(playerChoice, computerChoice);
    return 0;
}

char getUserChoice(){

    char choice;
    std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    std::cin >> choice;
    return choice;  
}

char getComputerChoice(){
    
    srand(time(0));
    
    int num = rand() % 3;
    
    if(num == 0){
        return 'R';
    }
    
    else if(num == 1){
        return 'P';
    } 
    
    else {
        return 'S';
    }
    return 'R'; // Default return value
}

void showchoice(char choice){

    if(choice == 'R'){
        std::cout << "Rock" << '\n';
    } 
    
    else if(choice == 'P'){
        std::cout << "Paper" << '\n';
    } 
    
    else if(choice == 'S'){
        std::cout << "Scissors" << '\n';
    } 
    
    else {
        std::cout << "Invalid choice" << '\n';
    }
}

void chooseWinner(char player , char computer){
    
    if(player == computer){
        std::cout << "It's a tie!!" << '\n';
    }

    else if((player == 'R' && computer == 'S') || (player == 'P' && computer == 'R') || (player == 'S' && computer == 'P')){
        std::cout << "You win!!" << '\n';
    } 
    
    else {
        std::cout << "Computer wins!!" << '\n';
    }
}