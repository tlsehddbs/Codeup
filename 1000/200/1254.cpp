#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    for(int i = int(a); i <= int(b); i++)
        cout << char(i) << " ";
        
    return 0;
}