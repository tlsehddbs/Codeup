#include <iostream>
using namespace std;

int main()
{
    int n, a, b, Es = 100, Ks = 100 ;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;

        if(a > b)
            Ks -= a;
        else if(a < b)
            Es -= b;
        else if(a == b)
            continue;
    }
    
    cout << Es << endl << Ks;

    return 0;
}