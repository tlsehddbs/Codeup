#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = {};
    cin.getline(a, 100);

    for(int i = 0; i <= strlen(a) - 1; i++)
    {
        if(a[i] == ',')
            cout << " ";
        else if(a[i] == ';')
            cout << "\n";
        else if(a[i] == ' ')
            continue;
        else
            cout << a[i];
    }
    
    return 0;
}