#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = {};
    cin >> a;

    for(int i = 0; i <= strlen(a) - 1; i++)
    {
        if(a[i] == ',')
            cout << " ";
        else
            cout << a[i];
    }
    return 0;
}