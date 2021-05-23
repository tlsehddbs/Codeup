#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;

    int a[1000] = {};

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        temp = i;

        for(int j = 0; j < n; j++)
        {
            cout << a[temp] << " ";
            temp++;
            
            if(temp == n)
                temp = 0;
        }
        cout << '\n';
    }
    return 0;
}