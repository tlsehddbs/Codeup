#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    if(n > 0)
        cout << "양수";
    else if(n < 0)
        cout << "음수";
    else 
        cout << 0;
        
    return 0;
}