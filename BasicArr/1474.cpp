#include <iostream>
using namespace std;

int main()
{
    int n, m, count = 1;
    int a[100][100] = {};

    cin >> n >> m;

    for(int i = (m - 1); i >= 0; i--)
    {
        if(i % 2 != 0)
            for(int j = (n - 1); j >= 0; j--)
            {
                a[j][i] = count;
                count++;
            }
        else
            for(int j = 0; j < n; j++)
            {
                a[j][i] = count;
                count++;
            }
    }
    
    if(m % 2 == 0)
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cout << a[i][j] << " ";

            cout << "\n";
        }
    else
        for(int i = (n - 1); i >= 0; i--)
        {
            for(int j = 0; j < m; j++)
                cout << a[i][j] << " ";
                
            cout << "\n";
        }
    return 0;
}