#include <iostream>
using namespace std;

int main()
{
    int y, m, d, result;
    cin >> y >> m >> d;

    result = y - m + d;

    if(result % 10 == 0)
        cout << "대박";
    else
        cout << "그럭저럭";
        
    return 0;
}