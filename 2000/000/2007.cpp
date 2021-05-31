#include <iostream>
using namespace std;

int main()
{
    int n, u = 0, d = 0;
    int a[100] = {};

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i + 1])
            u = 1;
        if(a[i] > a[i + 1])
            d = 1;
    }

    if(u == d)
        cout << "섞임";
    else if(d == 1)
        cout << "내림차순";
    else if(u == 1)
        cout << "오름차순";

    return 0;
}