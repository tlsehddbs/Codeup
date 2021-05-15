#include <iostream>
using namespace std;

int main()
{
    float a, b = 0;
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(1);
    cout << (a * b) / 2;
    
    return 0;
}
