#include <iostream>

constexpr int greater(int x, int y)
{
    return (x > y ? x : y);
}

int main()
{
    int x{ 5 }; // not constexpr
    int y{ 6 }; // not constexpr

    std::cout << greater(x, y) << " is greater!\n"; // will be evaluated at runtime

    return 0;
}
// In this example, because arguments x and y are not constant expressions, the function cannot be resolved at compile-time. 
// However, the function will still be resolved at runtime, returning the expected value as a non-constexpr int.