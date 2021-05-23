#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, Sn = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
        Sn += (pow(i, 2) + i) / 2;

    cout << Sn;
    
    return 0;
}