#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a == true || b == true)
        std::cout << true;
    else
        std::cout << false;
    return 0;
}