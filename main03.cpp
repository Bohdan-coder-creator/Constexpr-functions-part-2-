#include <iostream>
#include "Random.h"

bool playHilo(int guesses, int min, int max)
{
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";

    const int number{Random::get(min, max)};

    for (int count{1}; count <= guesses; ++count)
    {
        std::cout << "Guess #" << count << ": ";
        int guess{};
        std::cin >> guess;

        if(guess > number)
            std::cout << "Your guess is too high.\n";
        else if(guess < number)
            std::cout << "Your guess is too low.\n";
        else
        {
            std::cout << "Correct! You won! The number was " << number << "\n";
            return true;
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << number << "\n";
    return false;
}

bool playAgain()
{
    while(true)
    {
        char choice{};
        std::cout << "Do you want to play again? (y/n) ";
        std::cin >> choice;
        switch (choice)
        {
            case 'y':
                return true;
            case 'n':
            {
                std::cout << "Thank you for playing.";
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
        playHilo(guesses, min, max);
    } while (playAgain());

    return 0;
}