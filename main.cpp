#include <iostream>

void print(unsigned int u) // note: unsigned
{
    std::cout << u << '\n';
}

int main()
{
    std::cout << "Enter an integral value: ";
    int n{};
    std::cin >> n; // enter 5 or -5
    print(n);      // conversion to unsigned may or may not preserve value

    return 0;
}
/*Narrowing conversion is a potentially unsafe conversion where the destination type cannot store all possible values of the source type.

Examples include: converting from float to int, from a larger int to a smaller one, and between signed and unsigned types.

You should avoid narrowing conversions, and if they are necessary, perform them explicitly using static_cast.

Brace initialization ({}) disallows narrowing conversions and will produce a compile error.

Exception: if the source value is a constexpr and can be exactly represented, the conversion is not considered narrowing.

Conversions from float to int are always considered narrowing, even if the value is constexpr and in range.*/