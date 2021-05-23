#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char a[100] = {};

    cin.getline(a, 100);

    for(int i = 0; a[i] != '\0'; i++)
        if(a[i] == 'l' && a[i+1] == 'o' && a[i+2] == 'v' && a[i+3] == 'e')
            count++;

    cout << count;
    
    return 0;
}