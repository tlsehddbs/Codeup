#include <iostream>
using namespace std;

int main()
{
    int n, c = 0, max = 0, a[1000] = {};

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(a[i] >= a[j])
            {
                c++;
                i = j;
            }
        }
        if(c >= max)
            max = c;
        
        c = 0;
    }

    cout << max;
    
    return 0;
}