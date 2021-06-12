#include <iostream>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < h; j++)
        {
            for(int k = 0; k < j; k++)
                cout << " ";

            cout << "*\n";
        }
        for(int j = h - 1; j > 0; j--)
        {
            for(int k = j - 1; k > 0; k--)
                cout << " ";

            cout << "*\n";
        }
    }
    return 0;
}