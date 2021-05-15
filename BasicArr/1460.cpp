#include <iostream>

int main()
{
    int n, count = 1;
    std::cin >> n;

    int a[n][n] = {};
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = count;
            count++;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}