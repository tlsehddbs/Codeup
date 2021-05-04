#include <iostream>

int main()
{
    using namespace std;
    int a[10];
    int f = 0, l = 0;
    float result;
    float sum = 0;
    for(int i = 0; i < 10; i++)
        cin >> a[i];
    for(int i = 0; i < 10; i++)
        sum += a[i];
    cout << fixed;
    cout.precision(1);
    result = sum / 10;
    cout << result << endl;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] >= result)
            f++;
        else
            l++;
    }
    cout << f << " " << l;
    return 0;
}