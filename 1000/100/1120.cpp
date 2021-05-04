#include <iostream>

int main()
{
    using namespace std;
    
    float a, b, c = 0;
    cin >> a >> b >> c;
    
    cout << fixed;
    cout.precision(2);
    cout << (a + b + c) / 3;
    
    return 0;
}