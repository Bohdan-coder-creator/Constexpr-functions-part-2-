#include <cstdint>
#include <iostream>

double getValue()
{
    double value{};
    std::cout << "Enter a double value: ";
    std::cin >> value;
    return value;
}

char getTheSymbol()
{
    char symbol{};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> symbol;
    return symbol;
}

double calculate(double first_value, char symbol, double second_value)
{
    double result{};

    if (symbol == '+')
        result = first_value + second_value;
    else if (symbol == '-')
        result = first_value - second_value;
    else if (symbol == '*')
        result = first_value * second_value;
    else if (symbol == '/')
        result = first_value / second_value;
    else
        return 0.0;

    return result;
}

int main()
{
    double first_value = getValue();
    double second_value = getValue();
    char symbol = getTheSymbol();
    std::cout << "The answer is: " << calculate(first_value, symbol, second_value);
}