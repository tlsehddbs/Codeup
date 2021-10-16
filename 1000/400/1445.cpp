#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a[1000], b[1000], temp[2000] = {};
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp[i] = a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        temp[n + i] = b[i];
    }

    sort(temp, temp + (n + m));

    for(int i = 0; i < (n + m); i++)
        cout << temp[i] << " ";

    return 0;
}