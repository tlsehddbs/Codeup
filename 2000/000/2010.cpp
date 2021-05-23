#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0, b, n;
    cin >> b >> n;

    for(int i = 1; i <= b; i++)
        if(pow(i,n) >= b)
        {
            a = i;
            break;
        }

    a = (pow(a, n) - b) >= (b - pow(a - 1, n)) ? a - 1 : a;
    
    cout << a;
    
    return 0;
}