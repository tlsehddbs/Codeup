#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    c = (int)c;

    for(int i = (int)'a'; i <= c; i++)
        cout << (char)i << " ";
        
    return 0;
}