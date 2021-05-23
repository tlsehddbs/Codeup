#include <iostream>
using namespace std;

int main()
{
    int a, b, birth;
    cin >> a >> b;

    birth = a / 10000;
    
    if ((b / 1000000) == 1)
        cout << (2012 - (1900 + birth) + 1) << " " << "M";
    else if ((b / 1000000) == 2)
        cout << (2012 - (1900 + birth) + 1) << " " << "F";
    else if ((b / 1000000) == 3)
        cout << (2012 - (2000 + birth) + 1) << " " << "M";
    else if ((b / 1000000) == 4)
        cout << (2012 - (2000 + birth) + 1) << " " << "F";
        
    return 0;
}