#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    if(n >= 90)
        cout << "A";
    else if(n >= 80 && n < 90)
        cout << "B";
    else if(n >= 70 && n < 80)
        cout << "C";
    else if(n >= 60 && n < 70)
        cout << "D";
    else 
        cout << "F";
        
    return 0;
}
