#include <iostream>
using namespace std;

int main()
{
    int a[7][7] = {}, max = 0, sum = 0;

    for(int i = 1; i < 6; i++)
        for(int j = 1; j < 6; j++)
            cin >> a[i][j];

    for(int i = 1; i < 6; i++)
        for(int j = 1; j < 6; j++)
        {
            sum = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + 
                  a[i][j - 1] + a[i][j] + a[i][j + 1] + 
                  a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];

            if(sum >= max)
                max = sum;
        }

    cout << max;

    return 0;
}