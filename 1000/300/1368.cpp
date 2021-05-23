#include <iostream>
using namespace std;

int main()
{
    int h, k;
    char d;

    cin >> h >> k >> d;

    for(int i = 0; i < h; i++)
    {
        if(d == 'L')
        {
            for(int j = 0; j < i; j++)
                cout << " ";
        
            for(int q = 1; q <= k; q++)
                cout << "*";
        }
        if(d == 'R')
        {
            for(int j = h - 1; j > i; j--)
                cout << " ";

            for(int q = 1; q <= k; q++)
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}