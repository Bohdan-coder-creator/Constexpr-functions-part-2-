#include <iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    int height{};
    std::cin >> height;
    return height;
}

double calculate(int height, int seconds)
{
    double gravity = {9.8};
    double distance_fallen = {gravity * (seconds * seconds) / 2};
    double ball_height = {height - distance_fallen};
    if (ball_height < 0.0)
		return 0.0;

    return ball_height;
}

int main()
{
    double towerHeight {getHeight()};
    std::cout << "At 0 seconds, the ball is at height: " << calculate(towerHeight, 0) << "\n";
    std::cout << "At 1 second, the ball is at height: " << calculate(towerHeight, 1) << "\n";
    std::cout << "At 2 seconds, the ball is at height: " << calculate(towerHeight, 2) << "\n";
    std::cout << "At 3 seconds, the ball is at height: " << calculate(towerHeight, 3) << "\n";
    std::cout << "At 4 seconds, the ball is at height: " << calculate(towerHeight, 4) << "\n";
    std::cout << "At 5 seconds, the ball is at height: " << calculate(towerHeight, 5) << "\n";
}