#include <iostream>

int main()
{
    using namespace std;
    float a = 0;
    cin >> a;
    
    cout << fixed;
    cout.precision(3);
    cout << 1.8 * a + 32;
    
    return 0;
}