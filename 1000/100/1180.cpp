#include <iostream>
using namespace std;

int main()
{
    int n, a, b, x, tot;
    cin >> n;

    a = n / 10;
    b = n - (a * 10);
    tot = ((b * 10) + a) * 2;

    if(tot >= 100)
    {
        x = tot / 100;
        tot -= x * 100;
    }

    cout << tot << endl;
    if(tot > 50)
        cout << "OH MY GOD";
    else
        cout << "GOOD";
    
    return 0;
}