#include <iostream>

int main()
{
    using namespace std;
    float a,b,c = 0;
    int x,y,z = 0;
    
    cin >> a >> x >> b >> y >> c >> z;
    cout << fixed;
    cout.precision(1);
    cout << (a * x) + (b * y) + (c * z);
    return 0;
}