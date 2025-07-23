#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name;
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view sv)
{
    std::cout << "Enter the age of " << sv << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void operation(std::string_view name_1, int age_1, std::string_view name_2, int age_2)
{
    if (age_1 > age_2)
        std::cout << name_1 << " (age " << age_1 << ") " << "is older than " << name_2 << " (age " << age_2 << ")";
    else
        std::cout << name_2 << " (age " << age_2 << ") " << "is older than " << name_1 << " (age " << age_1 << ")";
}

int main()
{
    std::string name_1 = getName(1);
    int age_1 = getAge(name_1);

    std::string name_2 = getName(2);
    int age_2 = getAge(name_2);

    operation(name_1, age_1, name_2, age_2);

    return 0;
}