#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > 0; j--)
            if((n - i) == pow(sqrt(j), 2))
            {
                cout << i << " " << j;
                a += 1;
            }
        
        if(a != 0)
            break;
    }
    return 0;
}