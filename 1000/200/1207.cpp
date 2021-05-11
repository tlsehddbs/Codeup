#include <iostream>

int main()
{
    using namespace std;
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    if (a == 1)
        count++;
    if (b == 1)
        count++;
    if (c == 1)
        count++;
    if (d == 1)
        count++;

    switch (count)
    {
    case 1:
        cout << "도";
        break;
    case 2:
        cout << "개";
        break;
    case 3:
        cout << "걸";
        break;
    case 4:
        cout << "윷";
        break;
    default:
        cout << "모";
        break;
    }
    return 0;
}