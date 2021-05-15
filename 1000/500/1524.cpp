#include <iostream>
using namespace std;

int main()
{
    int a, b, mine = 0;

    int m[10][10] = {};
    
    for(int i = 1; i < 10; i++)
        for(int j = 1; j < 10; j++)
            cin >> m[i][j];
            
    cin >> a >> b;

    if(m[a][b] == 1)
        cout << -1;
    else
    {
        for(int i = -1; i <= 1; i++)
            for(int j = -1; j <= 1; j++)
                if(m[a + i][b + j] == 1)
                    mine++;
        
        cout << mine;
    }
    return 0;
}