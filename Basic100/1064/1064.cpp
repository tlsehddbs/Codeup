#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (c > (b > a ? a : b) ? (b > a ? a : b) : c);
    return 0;
}