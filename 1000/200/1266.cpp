#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int s[1000] = {};

    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
        sum += s[i];
        
    cout << sum;

    return 0;
}