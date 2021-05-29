#include <iostream>
using namespace std;

int main()
{
    int C_cnt = 0, CC_cnt = 0;
    char a[100] = {};

    cin >> a;

    for(int i = 0; i < 100; i++)
    {
        if(a[i] == 'c' || a[i] == 'C')
        {
            C_cnt++;
            
            if(a[i + 1] == 'c' || a[i + 1] == 'C')
                CC_cnt++;
        }
    }
    cout << C_cnt << "\n" << CC_cnt;

    return 0;
}