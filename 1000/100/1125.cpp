#include <iostream>

int main()
{
    using namespace std;
    int n;
    cin >> n;
    cout.setf(ios::uppercase);
    cout << oct << n << " " << hex << n;
    return 0;
}