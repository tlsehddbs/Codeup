#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            std::cout << "*";

        std::cout << "\n";
    }
    
    for(int i = n - 1; i > 0; i--)
    {
        for(int j = i; j > 0; j--)
            std::cout << "*";
        
        std::cout << "\n";
    }
    return 0;
}