#include <iostream>
using namespace std;

int main()
{
    int time, d, h, m, s;
    cin >> time;

    d = time / 86400;
    time -= d * 86400;

    h = time / 3600;
    time -= h * 3600;

    m = time / 60;
    time -= m * 60;

    s = time;

    cout << d << " " << h << " " << m << " " << s;
    
    return 0;
}