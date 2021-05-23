#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cin >> n;
    
    int a[51] = {};

    for(int i = 1; i <= n; i++)
    {
        count = i;

        for(int j = 0; j < n; j++)
        {
            cout << count << " ";
            count += n;
        }
        cout << "\n";
    }
    return 0;
}