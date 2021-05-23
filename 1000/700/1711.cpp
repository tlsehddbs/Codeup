#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; 

    if((x3 >= x1 && x2 >= x3) && (y3 >= y1 && y2 >= y3))
        cout << "충돌";
    else
        cout << "비충돌";

    return 0;
}