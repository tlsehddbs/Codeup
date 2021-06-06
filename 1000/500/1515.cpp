#include <iostream>
using namespace std;

int main()
{
    int count;
    int a[27][27] = {};
    int b[27][27] = {};

    for(int i = 1; i < 26; i++)
        for(int j = 1; j < 26; j++)
            cin >> a[i][j];

    for(int i = 1; i < 26; i++)
    {
        for(int j = 1; j < 26; j++)
        {
            count = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + 
                    a[i][j - 1] + a[i][j + 1] + 
                    a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];

            if(a[i][j] == 0 && count == 3)
                b[i][j] = 1;
            else if(a[i][j] == 1 && (count >= 4 || count <= 1))
                b[i][j] = 0;
            else if(a[i][j] == 1 && (count == 2 || count == 3))
                b[i][j] = 1;
        }
    }

    for(int i = 1; i < 26; i++)
    {
        for(int j = 1; j < 26; j++)
            cout << b[i][j] << " ";
            
        cout << "\n";
    }
    return 0;
}