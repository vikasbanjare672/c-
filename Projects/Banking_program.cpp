#include <iostream>

void showbalance(double balance);   
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice =0;

    do{
        std::cout << "******************************" << '\n';
        std::cout << "Welcome to the Banking Program" <<'\n';
        std::cout << "******************************" << '\n';

        std::cout << "Enter your choice: " <<'\n';
        std::cout << "1. Show Balance" <<'\n';
        std::cout << "2. Deposit" <<'\n';
        std::cout << "3. Withdraw" <<'\n';
        std::cout << "4. Exit" <<'\n';

        std::cin >> choice;

        switch(choice){
            case 1:
            showbalance(balance);
            break;

            case 2:
            balance += deposit();
            break;

            case 3:
            balance -= withdraw(balance);
            break;

            case 4:
            std::cout << "Thank you for using the Banking Program!" << '\n';
            break;

            default:
            std::cout << "Invalid choice. Please try again." << '\n';
        }
    } while(choice != 4);


    return 0;
}

void showbalance(double balance){
    std::cout << "Your current balance is: $" << balance << '\n';
}

double deposit(){
    double amount;
    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount. Deposit must be positive." << '\n';
        return 0;
    }

    std::cout << "Successfully deposited: $" << amount << '\n';
    return amount;
}

double withdraw(double balance){
    double amount;
    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount. Withdrawal must be positive." << '\n';
        return 0;
    }

    if(amount > balance){
        std::cout << "Insufficient funds. Your current balance is: $" << balance << '\n';
        return 0;
    }

    std::cout << "Successfully withdrew: $" << amount << '\n';
    return amount;
}