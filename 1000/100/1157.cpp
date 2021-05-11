#include <iostream>

int main()
{
    float a = 0;
    std::cin >> a;
    if (a >= 50 && a <= 60)
        std::cout << "win";
    else
        std::cout << "lose";
    return 0;
}