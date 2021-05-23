#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    int money[8] = {50000,10000,5000,1000,500,100,50,10};
    
    cin >> n;
    
    for(int i = 0; i < 8; i++)
    {
        count += n / money[i];
        n %= money[i];
    }
    cout << count;

    return 0;
}
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