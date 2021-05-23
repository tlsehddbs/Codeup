#include <iostream>
using namespace std;

int main()
{
    int n, count, temp = 0;
    cin >> n;

    int a[51][51] = {};

    for(int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            count = temp + 1;

            for(int j = 1; j <= n; j++)
            {
                a[i][j] = count;
                cout << count << " ";
                count++;
            }
        }
        else
        {
            count = n * i;
            temp = count;
            
            for(int j = 1; j <= n; j++)
            {
                a[i][j] = count;
                cout << count << " ";
                count--;
            }
        }
        cout << "\n";
    }
    return 0;
}