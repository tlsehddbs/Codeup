#include <iostream>
using namespace std;

int main()
{
    int a[7], am = 0, bm = 0;
    
    for(int i = 0; i < 7; i++)
    {
        cin >> a[i];

        if(a[i] % 2 == 0)
            if(a[i] >= am)
                am = a[i];

        if(a[i] % 2 != 0)
            if(a[i] >= bm)
                bm = a[i];
    }
    cout << am + bm;

    return 0;
}