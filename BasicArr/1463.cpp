#include <iostream>

int main()
{
    int n, count;
    std::cin >> n;
    
    int a[n][n] = {};

    for(int i = 0; i < n; i++)
    {
        count = n - i;
        for(int j = 0; j < n; j++)
        {
            a[i][j] = count;
            count += n;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}