#include <iostream>

int calculate(int x, int y, char z)
{
    switch (z)
    {
        case '-' :
        {
            int result = {x - y};
            std::cout << x << " - " << y << " = " << result;
            return result;
        }
        case '*' :
        {
            int result = {x * y};
            std::cout << x << " * " << y << " = " << result;
            return result;
        }
        case '+' :
        {
            int result = {x + y};
            std::cout << x << " + " << y << " = " << result;
            return result;
        }
        case '%' :
        {
            int result = {x % y};
            std::cout << x << " % " << y << " = " << result;
            return result;
        }
        case '/' :
        {
            int result = {x / y};
            std::cout << x << " / " << y << " = " << result;
            return result;
        }
        default:
        {
            std::cout << "You enterd a wrong operator!";
            return 0;
        }
    }
}

int main()
{
    int x{};
    int y{};
    char z{};

    std::cout << "Enter your first number: ";
    std::cin >> x;
    std::cout << "Enter your second number: ";
    std::cin >> y;
    std::cout << "Enter your operator: ";
    std::cin >> z;
    calculate(x, y, z);

    return 0;
}