#include <iostream>
using namespace std;

int main()
{
    char a[200] = {};
    cin.getline(a, 200);

    for(int i = 0; i < 200; i++)
    {
        if((int)a[i] == 32)
            cout << a[i];
        else if((int)a[i] >= 100 && (int)a[i] <= 122)
            cout << char(a[i] - 3);
        else if((int)a[i] >= 97 && (int)a[i] <= 99)
            cout << char(a[i] + 23);
    }
    
    return 0;
}
