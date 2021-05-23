#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, res;
    cin >> x1 >> y1 >> x2 >> y2;

    res = sqrt(((y2 - y1) * (y2 - y1)) + ((x2 - x1) * (x2 - x1)));

    cout << fixed;
    cout.precision(2);
    cout << res;
    
    return 0;
}