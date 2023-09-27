//NUMBER GUESSING GAME
//Program that generates a random number and ask the user to guess it......
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Creating  a random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! So sad ,Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! So sad, Try again." << std::endl;
        } else {
            std::cout << "Hurray! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}