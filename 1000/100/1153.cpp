#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;

    if(a > b)
        cout << ">";
    else if(b > a)
        cout << "<";
    else
        cout << "=";
        
    return 0;
}