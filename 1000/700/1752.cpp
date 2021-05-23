#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[20];
    cin >> a;

    for(int i = (strlen(a) - 1); i >= 0; i--)
        cout << a[i];
        
    return 0;
}