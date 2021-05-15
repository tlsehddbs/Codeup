#include <iostream>

int main()
{
    int n, a = 0;
    
    std::cin >> n;

    for(int i = 1; i <= n; i++)
        a += i;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            std::cout << a << " ";
            a--;
        }
        std::cout << "\n";
    }
    return 0;
}