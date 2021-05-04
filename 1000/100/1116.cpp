#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    
    int a, b = 0;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << a / b << endl;
    return 0;
}