#include <iostream>
using namespace std;

int main()
{
    int n, m, count;
    int a[100][100] = {};

    cin >> n >> m;

    count = n * m;

    for(int i = (n - 1); i >= 0; i--)
    {
        if(i % 2 == 0)
            for(int j = 0; j < m; j++)
            {
                a[i][j] = count;
                count--;
            }
        else
            for(int j = (m - 1); j >= 0; j--)
            {
                a[i][j] = count;
                count--;
            }
    }

    for(int i = (n - 1); i >= 0; i--)
    {
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
            
        cout << "\n";
    }
    return 0;
}