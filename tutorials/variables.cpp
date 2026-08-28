#include <iostream>

int main() {

    // int (whole number)

    int x = 5;
    int y = 10;
    int sum = x + y;
    int age = 19;
    int year = 2024;

    // double (number with decimal point)

    double gas_price = 109.99;
    double temperature = 36.6;

    // char (single character)

    char initial = 'A';
    char grade = 'B';
    char currency_symbol = '$';

    //bool (true or false)
    bool is_student = true;
    bool power = false;
    bool for_sale = true;

    // string (sequence of characters)
    
    std::string name = "Memeow";
    std::string rn = "Working on C++20";

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    std::cout << age << "\n";
    std::cout << year << "\n";

    std::cout << gas_price << "\n";
    std::cout << temperature << "\n";

    std::cout << initial << "\n";
    std::cout << grade << "\n";
    std::cout << currency_symbol << "\n";

    std::cout << is_student << "\n";
    std::cout << power << "\n";
    std::cout << for_sale << "\n";

    std::cout << name << "\n";
    std::cout << rn << "\n";

    std::cout << "Hello, " << name << "! " << rn << "\n";
  
    return 0;
}