#include <iostream>
using namespace std;

int main()
{
    int n, i, t;
    int a[24] = {};
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> t;
        a[t] = a[t] + 1;
    }
    for (i = 1; i <= 23; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}