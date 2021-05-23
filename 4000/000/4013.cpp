#include <iostream>
using namespace std;

void ten_to_two_j(unsigned n) 
{
    if (n < 2) 
        cout << n;
    else 
    {
        ten_to_two_j(n / 2);
        cout << n % 2;
    }
}

int main()
{
    int n;
    cin >> n;

    cout.setf(ios::uppercase);

    cout << dec << 2 << " ";
    ten_to_two_j(n);
    cout << endl;
    cout << dec << 8 << " " << oct << n << endl;
    cout << dec << 16 << " " << hex << n << endl;

    return 0;
}