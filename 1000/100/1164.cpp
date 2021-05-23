#include <iostream>
using namespace std;

int main()
{
    int H = 170;
    int a, b, c;
    cin >> a >> b >> c;

    if(a > H && b > H && c > H)
        cout << "PASS";
    else
        cout << "CRASH";
        
    return 0;
}