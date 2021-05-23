#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > 0; j--)
            if((n - i) == (j * j))
            {
                cout << i << " " << j;
                a+=1;
            }
        if(a != 0)
            break;
    }
    return 0;
}