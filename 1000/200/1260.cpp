#include <iostream>
using namespace std;

int main()
{
    int a, b, res = 0;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++)
        if(i % 3 == 0)
            res = res + i;
        
    cout << res;
    
    return 0;
}