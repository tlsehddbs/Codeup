#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int a[n][n] = {};
    int count = n, temp = n;

    for(int i = 0; i < n; i++)
    {
        count = temp * (i + 1);
        
        for(int j = 0; j < n; j++)
        {
            a[i][j] = count;
            count--;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}