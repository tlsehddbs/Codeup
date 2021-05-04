#include <iostream>

int main()
{
    using namespace std;
    
    float a, b = 0;
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(2);
    cout << a * b;
    return 0;
}