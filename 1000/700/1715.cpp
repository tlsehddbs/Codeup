#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(b % a == 0)
    {
        cout << 1 << " " << b / a;
        return 0;
    }
    
    for(int i = a / 2; i > 1; i--)
        if(a % i == 0 && b % i == 0)
        {
            cout << a / i << " " << b / i; 
            return 0;
        }
    cout << a << " " << b;
    
    return 0;
}