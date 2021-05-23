#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[100] = {};
    cin >> c;

    if(strcmp(c,"love") == 0)
        cout << "I love you.";
        
    return 0;
}