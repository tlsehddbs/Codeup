#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > i; j--)
            cout << " ";

        for(int q = 1; q <= n; q++)
            cout << "*";
        
        cout << "\n";
    }
    return 0;
}