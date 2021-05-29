#include <iostream>
using namespace std;

int main()
{
    int n;
    char a[100] = {};

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        cout << a << endl;

        if(i < n-1)
            cout << "AMOLED" << endl;
    }
    return 0;
}