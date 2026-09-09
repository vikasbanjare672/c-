#include <iostream>

int main(){

    std::string subjects[][3] = {{"phy" , "che" , "maths"} , 
                                {"CS" , "hindi" , "english"} ,
                                {"pharma" , "botany" , "zoology"}};
    
    int rows = sizeof(subjects)/sizeof(subjects[0]);
    int columns = sizeof(subjects[0])/sizeof(subjects[0][0]);

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < columns ; j++){
            std::cout << subjects[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}