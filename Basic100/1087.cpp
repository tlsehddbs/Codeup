#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i;
    cin >> n;

    for(i = 1; ; i++)
    {
        sum += i;

        if(sum >= n)
            break;
    }
    cout << sum;
    
    return 0;
}