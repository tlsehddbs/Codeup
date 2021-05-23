#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a = n;

    if (k != 0)
    {
        for(int i = 1; i < k; i++)
            n = n * a;

        cout << n;
    }
    else
        cout << 1;
        
    return 0;
}