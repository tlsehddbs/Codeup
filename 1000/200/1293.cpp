#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100] = {};
    int max = -101;
    int min = 101;

    for(int i = 0; i < n; i++)
        cin >> a[i];
        
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
        else if(a[i] < min)
            min = a[i];
    }
    cout << max << " " << min;
    
    return 0;
}