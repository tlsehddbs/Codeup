#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int a[n][m] = {};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> a[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }
    return 0;
}