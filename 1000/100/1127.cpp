#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    int x, y, z;

    cin >> a >> x >> b >> y >> c >> z;

    cout << fixed;
    cout.precision(1);
    cout << (a * x) + (b * y) + (c * z);

    return 0;
}