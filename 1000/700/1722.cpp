#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float result = 0;
    int x[100] = {}, y[100] = {};

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for(int i = 0; i < n - 1; i++)
        result += sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));

    cout << fixed;
    cout.precision(2);
    cout << result;

    return 0;
}