#include <iostream>
using namespace std;

int main()
{
    int a[10][10] = {};
    int b[10] = {};

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            cin >> a[i][j];
            
    for(int i = 0; i < 10; i++)
        cin >> b[i];

    for(int i = 0; i < 10; i++)
        if(b[i] == 1)
            for(int j = 9; j >= 0; j--)
            {
                if(a[j][i] == 0)
                {
                    if(j == 0)
                        cout << i + 1 << " " << "safe" << endl;
                    else
                        continue;
                }
                else if(a[j][i] < 0)
                {
                    cout << i + 1 << " " << "fall" << endl;
                    break;
                }
                else if(a[j][i] > 0)
                {
                    cout << i + 1 << " " << "crash" << endl;
                    break;
                }
            }        

    return 0;
}