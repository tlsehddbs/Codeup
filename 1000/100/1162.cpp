#include <iostream>
using namespace std;

int main()
{
    int y, m, d, result;
    cin >> y >> m >> d;

    result = y - m + d;

    if(result % 10 == 0)
        cout << "���";
    else
        cout << "�׷�����";
        
    return 0;
}