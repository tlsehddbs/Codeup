#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int sum = 0;
    char a[600] = {};

    cin >> a;

    for(int i = 0; i < strlen(a); i++)
    {
        sum += a[i] - 48;
        cout << sum << endl;
    }

    if(sum % 3 == 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}