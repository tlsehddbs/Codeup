#include <iostream>
using namespace std;

int main()
{
    int n[7], s = 0;
    for(int i = 0; i < 7; i++)
    {
        cin >> n[i];

        if(n[i] % 2 != 0)
            s += n[i];
    }
    
    if(s == 0)
        cout << -1;
    else
        cout << s;

    return 0;
}