#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << a;

    if(b < 10)
        cout << 0 << b;
    else
        cout << b;
        
    if(c < 100)
    {
        if(c < 10)
            cout << 0 << 0 << c;
        else
            cout << 0 << c;
    }
    else
        cout << c;

    return 0;
}