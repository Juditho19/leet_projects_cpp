#include <iostream>

int main() {
    int score[7]= {2,5,6,7,3};


    score[5]= {9};
    score[2]={10};
    // std::cout << score[5] << '\n';

    for (int i=0; i<6; i++) {
        std::cout << score[i] << '\n';
    }
    return 0;
}
