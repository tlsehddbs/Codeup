#include <iostream>
using namespace std;

int main()
{
    long long int a, b;
    char cal;
    cin >> a >> cal >> b;
    
    cout << fixed;
    cout.precision(2);

    if(cal == '+')
        cout << a + b;
    if(cal == '-')
        cout << a - b;
    if(cal == '*')
        cout << a * b;
    if(cal == '/')
        cout << float(a) / float(b);

    return 0;
}