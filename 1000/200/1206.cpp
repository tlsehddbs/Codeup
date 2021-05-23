#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;

    if(a < b)
    {
        if(b % a == 0)
            cout << a << "*" << b / a << "=" << b;
        else
            cout << "none";
    }
    else if(a > b)
    {
        if(a % b == 0)
            cout << b << "*" << a / b << "=" << a;
        else
            cout << "none";
    }
    else if(a == b)
        cout << a << "*" << a / b << "=" << b;
    
    return 0;
}