#include <iostream>

template <typename T, typename U> // We're using two template type parameters named T and U
T max(T x, U y) // x can resolve to type T, and y can resolve to type U
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max(2, 3.5) << '\n'; // resolves to max<int, double>

    return 0;
}
/*
However, the declared return type of our function is T. When T is an int and U is a double, the return type of the function is int. 
Our value 3.5 is undergoing a narrowing conversion to int value 3, resulting in a loss of data (and possibly a compiler warning).
*/
/*
So how do we solve this? 
Making the return type a U instead doesn’t solve the problem, as max(3.5, 2) has U as an int and will exhibit the same issue.
Check main02.cpp
*/