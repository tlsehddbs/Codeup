#include <iostream>

int main()
{
    int n, m, count;
    std::cin >> n >> m;
    int a[n][m] = {};
    count = n * m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            a[i][j] = count;
            count--;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}