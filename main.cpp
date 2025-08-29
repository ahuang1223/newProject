#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

int main() {
    std::cout << "Guess the Number!" << std::endl;
    int guessedNumber;
    int randomNumber = 0;
    int minValue = 1;
    int maxValue = 100;
    srand(time(0));
    randomNumber = rand() % (maxValue - minValue - 1) + minValue;
    do {
        std::cout << "Enter Number!" << std::endl;
        std::cin >> guessedNumber;


        if (randomNumber > guessedNumber)
        {
            std::cout << "Higher!" << std::endl;
        } else if(randomNumber < guessedNumber) {
            std::cout << "Lower!" << std::endl;
        } else {
            std::cout << "You're right!" <<std::endl;
        }
        
    } while (randomNumber != guessedNumber);
    return 0;
}