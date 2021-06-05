#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int n;
    char c[100];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> c;
      
        for(int i = strlen(c) - 1; i >= 0; i--)
            cout << c[i];
      
        cout << "\n";
    }
    return 0;
}