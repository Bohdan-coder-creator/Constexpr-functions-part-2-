#include <iostream>
#include <limits>   // for std::numeric_limits
#include <cctype>   // for std::tolower
#include "Random.h" // https://www.learncpp.com/cpp-tutorial/global-random-numbers-random-h/

// Получение валидного числа от пользователя
int getGuess(int count, int min, int max)
{
    while (true)
    {
        std::cout << "Guess #" << count << ": ";

        int guess{};
        std::cin >> guess;

        if (std::cin.fail()) // если ввод не число
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a valid number!\n";
            continue; // просим заново
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // чистим буфер

        if (guess < min)
        {
            std::cout << "Your number can't be less than " << min << "!\n";
            continue;
        }
        else if (guess > max)
        {
            std::cout << "Your number can't be more than " << max << "!\n";
            continue;
        }

        return guess; // валидный ввод
    }
}

// returns true if the user won, false if they lost
bool playHiLo(int guesses, int min, int max)
{
    std::cout << "Let's play a game. I'm thinking of a number between "
              << min << " and " << max << ". You have "
              << guesses << " tries to guess what it is.\n";

    int number{ Random::get(min, max) }; // загадываем число

    for (int count{1}; count <= guesses; ++count)
    {
        int guess{ getGuess(count, min, max) };

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

    std::cout << "Sorry, you lose. The correct number was " << number << "\n";
    return false;
}

bool playAgain()
{
    while (true)
    {
        char ch{};
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> ch;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter y or n!\n";
            continue;
        }

        ch = static_cast<char>(std::tolower(ch));
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (ch)
        {
            case 'y': return true;
            case 'n': return false;
            default:
                std::cout << "Please enter y or n!\n";
                break;
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

    std::cout << "Thank you for playing.\n";
    return 0;
}