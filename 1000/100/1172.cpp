#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a > c && b > c)
    {
        if(a >= b)
            cout << c << " " << b << " " << a;
        else
            cout << c << " " << a << " " << b;
    }
    else if(a < c && b < c)
    {
        if(a >= b)
            cout << b << " " << a << " " << c;
        else
            cout << a << " " << b << " " << c;
    }
    else
    {
        if(a >= c && c >= b)
            cout << b << " " << c << " " << a;
        else if(b >= c && c >= a)
            cout << a << " " << c << " " << b;
    }
    
    return 0;
}