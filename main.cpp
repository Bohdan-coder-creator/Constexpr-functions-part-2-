#include <iostream>

template <int N>

void printNumber()
{
    std::cout << N;
}

int main()
{
    printNumber<5>();
}