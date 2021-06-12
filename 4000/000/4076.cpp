#include <iostream>
using namespace std;

int main()
{
    float m, v, r;
    cin >> m >> v >> r;

    cout << fixed;
    cout.precision(2);

    if(m / v < r)
        cout << m / v << " UP";
    else if(m / v > r)
        cout << m / v << " DOWN";
    else
        cout << m / v << " STOP";

    return 0;
}