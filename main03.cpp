#include <iostream>
#include "Random.h"

bool playHiLo(int guesses, int min, int max)
{
    std::cout << "Let's play a game. I'm thinking about a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";

    const int number{Random::get(min, max)};

    for (int count{1}; count <= guesses; ++count)
    {
        std::cout << "Count #" << count << ": ";
        int guess{};
        std::cin >> guess;

        if (guess > number)
            std::cout << "Your guess is too high.\n";
        else if (guess < number)
            std::cout << "Your guess is too low.\n";
        else
        {
            std::cout << "Correct! You won! The number was " << number << "\n";
            return true;
        }
    }
    return false;
}

bool playAgain()
{
    while (true)
    {
        std::cout << "Would you like to play again? (y/n) ";
        char choice{};
        std::cin >> choice;
        switch (choice)
        {
            case 'y':
                return true;
            case 'n':
            {
                std::cout << "Thank you for playing.\n";
                return false;
            }
        }
    }
}

int main()
{
    constexpr int guesses{7};
    constexpr int min{1};
    constexpr int max{100};

    do
    {
        playHiLo(guesses, min, max);
    } while (playAgain());
}