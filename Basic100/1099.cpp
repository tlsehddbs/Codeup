#include <iostream>
using namespace std;

int main()
{
    int a[10][10] = {};

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            cin >> a[i][j];

    int x = 1, y = 1;

    while(a[y][x] != 2)
    {
        if(a[y][x+1] == 0)
        {
            a[y][x] = 9;
            x++;
        }
        else
        {
            a[y][x] = 9;
            y++;
        }
    }

    a[y][x] = 9;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            cout << a[i][j] << " ";
            
        cout << "\n";
    }
    return 0;
}