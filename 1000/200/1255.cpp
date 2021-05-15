#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    for (double i = a; i <= b; i+=0.01)
        cout << i << " ";

    return 0;
}