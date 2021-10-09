#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {};
    int sum[3] = {}, s_sum[3] = {};
    int result = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            cout << a[i][j] << " ";

            sum[i] += a[i][j];
            s_sum[j] += a[i][j];
        }
        cout << sum[i] << endl;
        result += sum[i];
    }

    for(int i = 0; i < 3; i++)
        cout << s_sum[i] << " ";
    cout << result;

    return 0;
}