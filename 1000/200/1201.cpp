#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    if(n > 0)
        cout << "���";
    else if(n < 0)
        cout << "����";
    else 
        cout << 0;
        
    return 0;
}