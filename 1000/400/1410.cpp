#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    char c[100001];
    cin >> c;
    for (int i = 0; i < strlen(c); i++)
    {
        if(c[i] =='(')
            a++;
        if(c[i] == ')')
            b++;
    }
    cout << a << " " << b;
    return 0;
}