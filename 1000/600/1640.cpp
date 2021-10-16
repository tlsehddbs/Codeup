#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, count = 0;
    char c[50] = {};

    cin >> n;

    for(int i = 0; i <= n; i++)
    {
        cin.getline(c, 50);

        if(strlen(c) <= 3)
        {
            cout << c << endl;
            count++;
        }

        for(int j = 0; j < strlen(c); j++)
        {
            if(c[j] == 't' && c[j + 1] == 'a' && c[j + 2] == 'p')
            {
                cout << c << endl;
                count++;
                break;
            }
            else if(c[j] == 'x' && c[j + 1] == 'o' && c[j + 2] == 'c' && c[j + 3] == 'u' && c[j + 4] == 'r' && c[j + 5] == 'e')
            {
                cout << c << endl;
                count++;
                break;
            }
        }
    }

    if(count <= 3)
        cout << "safe";
    else if(count <= 6)
        cout << "warning";
    else
        cout << "danger";
    return 0;
}