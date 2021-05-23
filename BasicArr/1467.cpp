#include <iostream>
using namespace std;

int main()
{
    int n, m, count;
    int a[100][100] = {};
    
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        count = ((n * m) + 1) - (n - i);
        
        for(int j = 0; j < m; j++)
        {
            a[i][j] = count;
            count -= n;
            
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}