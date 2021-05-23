#include <iostream>
using namespace std;

int main()
{
    int m, d, all = 305, dd = 0;
    cin >> m >> d;

    for(int i = 1; i <= m; i++)
    {
        if(i != m)
        {
            if(i % 2 == 0)
                dd += 30;
            else
                dd += 31;
        }
        else
            dd += d;
    }
    cout << all - dd; 

    return 0;
}