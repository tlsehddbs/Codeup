#include <iostream>
using namespace std;

int main()
{
    int a, b, result = 0, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            if(cnt == 0)
            {
                cout << i;
                result += i;
                cnt++;
            }
            else
            {
                result += i;
                cout << "+" << i;
                cnt++;
            }
        }
        else
        {
            result -= i;
            cout << "-" << i;
            cnt++;
        }
    }
    cout << "=" << result;

    return 0;
}