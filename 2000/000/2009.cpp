#include <iostream>
using namespace std;

int main()
{
    int k, n, result, count = 0;
    cin >> k >> n;
    
    while(k >= n)
    {
        result = k / n;
        k -= result * n;
        k += result;
        count += result;
    }
    cout << count;
    
    return 0;
}