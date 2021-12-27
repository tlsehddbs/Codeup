#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, count = 1, a[1000] = {};

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(a[i] >= max)
                max = a[i];
        }
        cout << a[i] << " " << count++;
    }

    return 0;
}