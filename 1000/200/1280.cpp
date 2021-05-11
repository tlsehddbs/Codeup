#include <iostream>

int main()
{
    using namespace std;
    int a, b, result = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            result += i;
            cout << "+" << i;
        }
        else
        {
            result -= i;
            cout << "-" << i;
        }
    }
    cout << "=" << result;
    return 0;
}