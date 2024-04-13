#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Generate a random secret number between 1 and 100
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Try to guess the secret number between 1 and 100.\n";

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed it right in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Try a higher number.\n";
        } else {
            std::cout << "Try a lower number.\n";
        }
    }

    std::cout << "Thanks for playing! Goodbye!\n";
    return 0;
}
