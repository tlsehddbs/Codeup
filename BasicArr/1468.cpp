#include <iostream>
using namespace std;

int main() 
{
    int n, count = 1;
    int a[100][100] = {};
    
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i % 2 == 0)
            {
                a[i][j] = (n * i) - j;
                cout << a[i][j] << " ";    
            }
            else if(i % 2 != 0)
            {
                a[i][j] = count;
                cout << a[i][j] << " ";    
            }
            count++;
        }
        cout << endl;
    }
    return 0;
}