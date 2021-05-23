#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << a << b;
    
    if(c < 10)
        cout << 0 << c;
    else
        cout << c;
        
    return 0;
}