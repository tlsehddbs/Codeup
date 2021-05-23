#include <iostream>
using namespace std;

int main()
{
    long long int a, m, d, n;
    cin >> a >> m >> d >> n;

    for(int i = 1; i < n; i++)
        a = a * m + d;

    cout << a;
    
    return 0;
}