#include <iostream>
using namespace std;

int main()
{   
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
        cout << "µµ";
        break;
    case 2:
        cout << "°³";
        break;
    case 3:
        cout << "°É";
        break;
    case 4:
        cout << "À·";
        break;
    default:
        cout << "¸ð";
        break;
    }
    return 0;
}