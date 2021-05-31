#include <iostream>
using namespace std;

int main()
{
    int a[9] = {};
    int max = 0, pos;

    for(int i = 0; i < 9; i++)
        cin >> a[i];

    for(int i = 0; i < 9; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            pos = i;
        }
    } 
    cout << max << endl << pos + 1;

    return 0;
}