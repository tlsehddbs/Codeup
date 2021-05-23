#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    int a[100][100] = {};

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            count = n * (i + 1);
        else
            count = (n * i) + 1;

        for(int j = 0; j < n; j++)
        {
            if(i % 2 == 0)
            {
                a[j][i] = count;
                count--;
            }
            else
            {
                a[j][i] = count;
                count++;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
            
        cout << "\n";
    }
    return 0;
}