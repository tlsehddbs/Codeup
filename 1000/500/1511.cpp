#include <iostream>

int main()
{
    int a[101][101] = {};

    int n, count = 1, sum = 0;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            a[i][j] = count;
            count++;

            if(i == 1 || i == n)
                sum += a[i][j];

            if((i != 1 && i != n) && (j == 1 || j == n))
                sum += a[i][j];
        }
    std::cout << sum;

    return 0;
}