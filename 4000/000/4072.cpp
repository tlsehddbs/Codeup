#include <iostream>
using namespace std;

int main()
{
    int n;
    float a[10] = {}, max = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] >= max)
            max = a[i];
    }

    cout << max << "\n";
    if(max >= 35)
        cout << "red";
    else if(max >= 33)
        cout << "yellow";
    else
        cout << "green";

    return 0;
}