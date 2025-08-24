#include <iostream>

template <typename T> // this is the template parameter declaration defining T as a type template parameter

T add(T x, T y) // this is the function template definition for add<T>
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2) << "\n";
    std::cout << add(1.23, 5.2324) << "\n";
    std::cout << add(std::string("Hello "), std::string("There")) << "\n";
}
/*
Function templates are a mechanism in C++ (and some other languages) that allow you to write a single function to work with different data types.

Instead of creating multiple overloaded functions (for example, for int, double, string), 
you can write one template, and the compiler will automatically generate the required versions.
*/