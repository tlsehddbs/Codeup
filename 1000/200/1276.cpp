#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;

    int result = 1;

    for (int i = 1; i <= a; i++)
        result *= i;

    std::cout << result;

    return 0;
}