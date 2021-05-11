#include <iostream>

int main()
{
    float a = 0;
    std::cin >> a;
    if (a >= 30 && a <= 40 || a >= 60 && a <= 70)
        std::cout << "win";
    else
        std::cout << "lose";
    return 0;
}