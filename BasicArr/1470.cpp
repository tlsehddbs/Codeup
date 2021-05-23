#include <iostream>
using namespace std;

int main()
{
    int n, count = 1, temp = 1;
    int a[100][100] = {};

    cin >> n;
    
    for(int j = 0; j < n; j++)
    {
        if(j % 2 == 0)
        {
            count = temp;

            for(int i = 0; i < n; i++)
            {
                a[i][j] = count;
                count++;
                temp++;
            }
        }
        else
        {
            count += n - 1;

            for(int i = 0; i < n; i++)
            {
                a[i][j] = count;
                count--;
                temp++;
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