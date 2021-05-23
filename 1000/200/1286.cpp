#include <iostream>
using namespace std;

int main()
{
    int a[5] = {};
    int max = -1000001;
    int min = 1000001;

    for(int i = 0; i < 5; i++)
        cin >> a[i];
        
    for(int i = 0; i < 5; i++)
    {
        if(a[i] > max)
            max = a[i];
        else if(a[i] < min)
            min = a[i];
    }
    cout << max << "\n" << min;

    return 0;
}