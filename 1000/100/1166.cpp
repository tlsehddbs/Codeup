#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    if (n % 4 == 0 && n % 100 != 0)
        std::cout << "yes";
    else if (n % 400 == 0)
        std::cout << "yes";
    else
        std::cout << "no";
    return 0;
}