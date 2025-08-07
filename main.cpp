#include <iostream>

int sumTo(int chislo)
{
	int count{};
	for (int i = 1; i <= chislo; i++)
		count += i;
	return count;
}

int main()
{
	int number{};
	std::cout << "Write a number: ";
	std::cin >> number;
	std::cout << "The answer is: " << sumTo(number);
	return 0;
}