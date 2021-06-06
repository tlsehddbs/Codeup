#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << fixed;
    cout.precision(1);

    cout << a + b + c << endl;
    cout << (float)(a + b + c) / 3;
    
    return 0;
}