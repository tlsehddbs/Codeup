#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100][100] = {};
    
    cin >> n;
    
    int count = n, temp = n;

    for(int i = 0; i < n; i++)
    {
        count = temp * (i + 1);
        
        for(int j = 0; j < n; j++)
        {
            a[i][j] = count;
            count--;
            
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}