#include <iostream>
using namespace std;

int main()
{
    int n, first = 24;;
    int a[10000] = {};

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        if(a[i] <= first)
            first = a[i];
    
    cout << first;
    
    return 0;
}