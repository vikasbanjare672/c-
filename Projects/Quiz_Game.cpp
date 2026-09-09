#include <iostream>
#include <iomanip>
int main(){

    std::string questions[] = {"1. In which year C++ is developed ??",
                               "2. Who invented C++ ?",
                               "3. What is the predecessor of C++ ??",
                               "4. Is your gf loyal ?"};

    std::string options[][4] = {{"A. 1963   B. 1982   C. 1800   D. 1984"},
                                {"A. ME   B. YOU   C. Fibona CHi   D. Bjarne Stroustrup"},
                                {"A. B   B. C+   C. C   D. Assembly"},
                                {"A. NO!!!   B. yes   C. Maybe   D. All of the above"}};

    char anskey[] = {'D' , 'D' , 'C' , 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0 ; i < size ; i++){

        std::cout << "********************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "********************************\n";

        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Your Answer : ";
        std::cin >> guess ;
        guess = toupper(guess);
        std::cout << '\n';

        if(guess == anskey[i]){
            std::cout << "CORRECT " << '\n';
            score++;
        }
        else{
            std::cout << "WRONG!!\n";
           std::cout << "ANSWER : " << anskey[i] << '\n'; 
        }
    }
    std::cout << "********************************\n";
    std::cout << "************ RESULT ************\n";
    std::cout << "********************************\n";
    std::cout << "CORRECT GUESSES : " << score << '\n';
    std::cout << "# OF QUESTIONS : " << size << '\n';
    std::cout << "Your Score : " << std::fixed << std::setprecision(2) << (score * 100.0 / size) << " %" << " CORRECT!" << '\n';

    return 0;
}