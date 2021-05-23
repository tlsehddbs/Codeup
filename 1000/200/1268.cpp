#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    
    int s[n] = {};
    
    for(int i = 0; i < n; i++)
        cin >> s[i];
        
    for(int i = 0; i < n; i++)
        if(s[i] % 2 == 0)
            sum += 1;
        
    cout << sum;
    
    return 0;
}