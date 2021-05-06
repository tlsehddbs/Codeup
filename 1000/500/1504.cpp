#include <iostream>

int main()
{
    int n, count, vertical_count, horizon_count, i = 0, j = 0;
    std::cin >> n;
    int a[101][101] = {};

    for (i = 0; i < n; i++)
    {
        count = i;
        vertical_count = count;
        horizon_count = count;

        for (j = 0; j < n; j++)
        {
            if ((j + 1) % 2 == 0)
            {
                vertical_count = (n * (j + 1)) - i;
                a[i][j] = vertical_count;
                horizon_count = vertical_count;
            }
            else
            {  
                if (i > 0)
                    horizon_count = a[i - 1][j] + 1; 
                else
                    horizon_count++;

                a[i][j] = horizon_count;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}