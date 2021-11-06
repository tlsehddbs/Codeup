#include <iostream>
using namespace std;

int main()
{
    string str;
    int a, b;
    
    getline(cin, str);
    cin >> a >> b;

    for(int i = a; i < a + b; i++)
        cout << str[i];

    return 0;
}