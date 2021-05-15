#include <iostream>
using namespace std;

int main()
{   
    int n = 0, m = 0;
    cin >> n;

    int a[n] = {};
    m = (n - 1) / 2;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << a[0] << " " << a[m] << " " << a[n-1];
    
    return 0;
}