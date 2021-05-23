#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    if(n % 4 == 0 && n % 100 != 0)
        cout << "yes";
    else if(n % 400 == 0)
        cout << "yes";
    else
        cout << "no";
        
    return 0;
}