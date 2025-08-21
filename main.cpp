#include <iostream>

void print(char, int)
{
	std::cout << 'a' << '\n';
}

void print(char, double)
{
	std::cout << 'b' << '\n';
}

void print(char, float)
{
	std::cout << 'c' << '\n';
}

int main()
{
	print('x', 'a');

	return 0;
}
/*
In the above program, all functions match the first argument exactly. 
However, the top function matches the second parameter via promotion, whereas the other functions require a conversion. 
Therefore, print(char, int) is unambiguously the best match.
*/