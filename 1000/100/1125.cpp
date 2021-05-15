#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout.setf(ios::uppercase);
    cout << oct << n << " " << hex << n;
    
    return 0;
}