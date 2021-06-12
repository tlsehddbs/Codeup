#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == 1 || j == 1 || i == n || j == n || (i + j) % k == 1 || k == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}