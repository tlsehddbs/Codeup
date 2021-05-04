#include <iostream>
int main()
{
    int n = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
            std::cout << " ";
        for (int j = n; j >= i; j--)
            std::cout << "*";
        std::cout << "\n";
    }
    return 0;
}