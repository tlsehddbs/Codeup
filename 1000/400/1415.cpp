#include <iostream>
using namespace std;

int main()
{
    int am = 0, bm = 0;
    int a[10];

    for(int i = 0; i < 10; i++)
        cin >> a[i];

    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 != 0 && a[i] > am)
            am = a[i];
        if(a[i] % 2 == 0 && a[i] > bm)
            bm = a[i];
    }

    if(am == 0)
        cout << bm;
    else if(bm == 0)
        cout << am;
    else
        cout << am << " " << bm;

    return 0;
}