#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if(h != 0)
    {
        if(m >= 30)
            m -= 30;
        else
        {
            m += 30;
            h--;
        }
    }
    else
    {
        if(m >= 30)
            m -= 30;
        else
        {
            m += 30;
            h = 23;
        }
    }
    cout << h << " " << m;

    return 0;
}