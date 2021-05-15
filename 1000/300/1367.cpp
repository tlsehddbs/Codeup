#include <iostream>

int main()
{
    int n;
    
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > i; j--)
            std::cout << " ";

        for(int q = 1; q <= n; q++)
            std::cout << "*";
        
        std::cout << "\n";
    }
    return 0;
}