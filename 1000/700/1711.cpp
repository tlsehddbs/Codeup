#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; 

    if((x3 >= x1 && x2 >= x3) && (y3 >= y1 && y2 >= y3))
        cout << "�浹";
    else
        cout << "���浹";

    return 0;
}