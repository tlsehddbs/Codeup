#include <iostream>
using namespace std;

int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    
    if(((y + m + d) / 100) % 2 == 0)
        cout << "대박";
    else
        cout << "그럭저럭";
        
    return 0;
}