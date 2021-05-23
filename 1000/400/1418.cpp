#include <iostream>
using namespace std;

int main()
{
    char c[10] = {};
    cin >> c;

    for(int i = 0; i < 10; i++)
        if (c[i] == 't')
            cout << i + 1 << " ";
            
    return 0;
}