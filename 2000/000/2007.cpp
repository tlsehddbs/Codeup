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
        cout << "����";
    else if(d == 1)
        cout << "��������";
    else if(u == 1)
        cout << "��������";

    return 0;
}