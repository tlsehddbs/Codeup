#include <iostream>
using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        res = res + i;
        
    cout << res;
    
    return 0;
}