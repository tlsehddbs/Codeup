#include <iostream>
using namespace std;

int main()
{
    char c[100] = {};
    cin.getline(c, 100);
    
    for(int i = 0; i < 100; i++)
    {
        if(c[i] == '\0')
            break;
        else
            if(c[i] == ' ')
                continue;
            else
                cout << c[i];
    }
    return 0;
}
