#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = a; i > 0; i--)
        if(a % i == 0 && b % i == 0 && c % i == 0)
        {
            cout << i;
            break;
        }

    return 0;
}