#include <iostream>

int main()
{
    int outer{5};
    while (outer >= 1)
    {
        int inner{1};
        while (inner <= 5)
        {
            if (inner < outer)
                std::cout << "  ";
            else
                std::cout << inner << " ";
            ++inner;
        }
        std::cout << "\n";
        --outer;
    }
}