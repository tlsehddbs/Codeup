#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        if (b <= c)
            cout << b;
        else
            cout << c;
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
            cout << a;
        else
            cout << c;
    }
    else if (c <= a && c <= b)
    {
        if (a <= b)
            cout << a;
        else
            cout << b;
    }
    return 0;
}