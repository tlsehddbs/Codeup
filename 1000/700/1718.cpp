#include <iostream>
using namespace std;

int main()
{
    char c, h;
    int x, y;
    
    cin >> c >> x;
    if(x == 'H')
    {
        x = 1;
        cin >> y;
    }
    else
        cin >> h >> y;

    cout << (12 * x) + y;
    
    return 0;
}