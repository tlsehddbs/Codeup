#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << a + b << "\n"
         << a - b << "\n"
         << a * b << "\n"
         << a / b << "\n"
         << a % b << "\n";

    cout << fixed;
    cout.precision(2);

    cout << (float)a / (float)b << "\n";
    
    return 0;
}