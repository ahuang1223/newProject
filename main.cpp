#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <random>

int main() {
    std::cout << "Guess the Number!" << std::endl;
    int guessedNumber;
    long randomNumber = 0;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
    randomNumber = dist(gen);
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