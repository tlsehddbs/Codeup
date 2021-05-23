#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
        if(i % 10 == 1)
            count++;

    cout << count;

    return 0;
}