#include <iostream>
using namespace std;

int main()
{
    int n, a[100] = {};
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i += 2)
    {
        if(a[i] >= a[i + 1])
            cout << a[i] << " ";
        else
            cout << a[i + 1] << " ";
    }

    return 0;
}