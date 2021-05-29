#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a == b)
        cout << "tie";
    else if(a == 0)
    {
        if(b == 1)
            cout << "win";
        if(b == 2)
            cout << "lose";
    }
    else if(a == 1)
    {
        if(b == 2)
            cout << "win";
        if(b == 0)
            cout << "lose";
    }
    else if(a == 2)
    {
        if(b == 0)
            cout << "win";
        if(b == 1)
            cout << "lose";
    }
    return 0;
}