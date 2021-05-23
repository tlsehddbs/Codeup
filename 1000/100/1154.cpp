#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;
    
    if(a > b)
        cout << a - b;
    else
        cout << b - a;
    
    return 0;
}