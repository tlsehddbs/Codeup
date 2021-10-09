#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1) return 1;
    else return n * fact(n - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin >> a >> b;

    cout << fact(a) / (fact(b) * fact(a - b));

    return 0;
}