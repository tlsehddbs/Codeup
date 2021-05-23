#include <iostream>
using namespace std;

int main()
{
    float a;
    cin >> a;
    
    cout << fixed;
    cout.precision(3);
    cout << 1.8 * a + 32;
    
    return 0;
}