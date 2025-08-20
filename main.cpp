#include <iostream>

int add(int x, int y) // integer version
{
    return x + y;
}

double add(double x, double y) // integer version
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2); // calls add(int, int)
    std::cout << '\n';
    std::cout << add(1.2, 3.4); // calls add(double, double)

    return 0;
} 
/*
Fortunately, C++ has an elegant solution to handle such cases. 
Function overloading allows us to create multiple functions with the same name, 
so long as each identically named function has different parameter types (or the functions can be otherwise differentiated). 
Each function sharing a name (in the same scope) is called an overloaded function (sometimes called an overload for short).
*/