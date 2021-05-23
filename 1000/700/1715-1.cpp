#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for(int i = a; i > 1; i--)
        if(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
        
    cout << a << " " << b;

    return 0;
}