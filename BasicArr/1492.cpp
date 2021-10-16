#include <iostream>
using namespace std;

int main()
{
    int n, temp = 0, a[100] = {};
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp += a[i];
        cout << temp << " ";
    }

    return 0;
}