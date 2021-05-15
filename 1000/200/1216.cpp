#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if((b - c) > a)
        cout << "advertise";
    else if((b - c) < a)
        cout << "do not advertise";
    else
        cout << "does not matter";
        
    return 0;
}