#include <iostream>
using namespace std;

int main()
{
    int n, g, a[100] = {};
    cin >> n >> g;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i += g)
    {
        int temp = 1001;
        for(int j = 0; j < g && i + j < n; j++)
            if(a[i + j] < temp)
                temp = a[i + j];

        cout << temp << " ";
    }

    return 0;
}