#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[10000] = {};
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for(int i = 0; i < n; i++)
        cout << a[i] << endl;
    
    return 0;
}