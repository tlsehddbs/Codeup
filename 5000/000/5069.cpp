#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int h = 0, s = 0;
    char a[255] = {};

    cin.getline(a, 255);

    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == ':' && a[i + 1] == '-' && a[i + 2] == ')')
            h++;

        if(a[i] == ':' && a[i + 1] == '-' && a[i + 2] == '(')
            s++;
    }

    if(h == 0 && s == 0)
        cout << "none";
    else if(h == s)
        cout << "unsure";
    else if(h > s)
        cout << "happy";
    else if(h < s)
        cout << "sad";
        
    return 0;
}