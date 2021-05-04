#include <iostream>

int main()
{
    using namespace std;
    
    float a, b = 0;
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(1);
    cout << (a * b) / 2;
    return 0;
}
