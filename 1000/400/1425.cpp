#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, c, a[99] = {}, cnt = 0;
    
    cin >> n >> c;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for(int i = 0; i < n; i++)
    {
        cnt++;
        
        if(cnt == c)
        {
            cout << a[i] << " \n";
            cnt = 0;
        }
        else
            cout << a[i] << " ";
    }
    return 0;
}