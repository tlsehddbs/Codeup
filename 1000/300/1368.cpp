#include <iostream>

int main()
{
    int h, k;
    char d;
    
    std::cin >> h >> k >> d;

    for(int i = 0; i < h; i++)
    {
        if(d == 'L')
        {
            for(int j = 0; j < i; j++)
                std::cout << " ";
        
            for(int q = 1; q <= k; q++)
                std::cout << "*";
        }
        if(d == 'R')
        {
            for(int j = h - 1; j > i; j--)
                std::cout << " ";

            for(int q = 1; q <= k; q++)
                std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}