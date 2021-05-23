#include <iostream>
using namespace std;

int main()
{
    int n, count;
    int a[100][100] = {};
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        count = n - i;
        
        for(int j = 0; j < n; j++)
        {
            a[i][j] = count;
            count += n;
            
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}