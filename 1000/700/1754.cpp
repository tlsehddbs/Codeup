#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int sa = 0, sb = 0;
    char a[100] = {}, b[100] = {};

    cin >> a >> b;

    if(strlen(a) > strlen(b))
        cout << b << " " << a;
    else if(strlen(a) < strlen(b))
        cout << a << " " << b;
    else
    {
        if(strcmp(a, b) > 0)
            cout << b << " " << a;
        else
            cout << a << " " << b;
    }

    return 0;
}