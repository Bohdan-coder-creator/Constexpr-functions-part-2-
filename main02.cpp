#include <iostream>

std::string_view getQuantityPhrase(int apple)
{
    if (apple == 0)
        return "no";
    if (apple < 0)
        return "negative";
    if (apple == 1)
        return "a single";
    if (apple == 2)
        return "a couple of";
    if (apple == 3)
        return "a few";
    return "many";
}

std::string_view getApplesPluralized(int qualiteit_van_appels)
{
    return (qualiteit_van_appels == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}