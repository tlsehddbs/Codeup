#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;

    if (a >= 50 && a <= 70 || a % 6 == 0)
        std::cout << "win";
    else
        std::cout << "lose";
        
    return 0;
}
