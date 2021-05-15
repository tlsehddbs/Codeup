#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a[n][n] = {};

    for(int i = 0; i < n; i++)
        std::cin >> a[i][0];

    for(int i = 1; i < n; i++)
        for(int j = 1; j < n; j++)
            a[i][j] = a[i][j - 1] - a[i - 1][j - 1];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
            std::cout << a[i][j] << " ";
            
        std::cout << "\n";
    }
    return 0;
}