#include <iostream>
using namespace std;

int main()
{
    int k, n, count = 0;
    int a[50][50] = {};
    
    cin >> k >> n;
    for(int i = 0; i < k; i++)
        for(int j = 0; j < k; j++)
            cin >> a[i][j];

    for(int i = 0; i < k; i++)
        for(int j = 0; j < k; j++)
            if(a[i][j] > -1)
                if((a[i][j] + n) <= 5)
                    count++;

    cout << count;

    return 0;
}