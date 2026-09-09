#include <iostream>

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
    int score;

    for (int i = 0 ; i < size ; i++){

        std::cout << "********************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "********************************\n";

        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
            std::cout << options[i][j] << " ";
        }
        std::cout <<  '\n';
        std::cout << "Your Answer : ";
        std::cin >> guess ;
        guess = toupper(guess);

        if(guess == anskey[i]){
            std::cout << "Correct " << '\n';
            score++;
        }
        else{
            std::cout << "Wrong!!" << '\n';
           std::cout << "Correct ans : " << anskey[i]; 
        }
        std::cout << "Correct Answers : " << score << '\n';
        std::cout << "Your Score : " << (score/double(size))*100 << " % " << "Correct!" << '\n';

    }

    return 0;
}