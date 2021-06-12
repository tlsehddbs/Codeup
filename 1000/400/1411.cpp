#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[50] = {};
    cin >> n;

    for(int i = 0; i < n - 1; i++)
        cin >> a[i];

    sort(a, a + n);

    for(int i = 0; i < n; i++)
    {
        if(a[i] + 1 != a[i + 1])
        {
            cout << a[i] + 1;
            break;
        }
    }

    return 0;
}