#include <iostream>
using namespace std;

int main()
{
    int a, b, y, m, d;
    char c, s;

    cin >> a >> c >> b;

    y = a / 10000;
    m = (a - (y * 10000)) / 100;
    d = (a - ((y * 10000) + (m * 100)));

    b /= 1000000;

    if(b == 1 || b == 3)
        s = 'M';
    else
        s = 'F';

    if(b == 1 || b == 2)
        cout << 1900 + y << "/";
    else
        cout << 2000 + y << "/";

    if(m < 10)
        cout << 0 << m << "/";
    else
        cout << m << "/";

    if(d < 10)
        cout << 0 << d << " " << s;
    else
        cout << d << " " << s;
        
    return 0;
}