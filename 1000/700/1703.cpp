#include <iostream>
using namespace std;

int main()
{
    int time, h, m, s;
    cin >> time;

    h = time / 3600;
    time -= h * 3600;

    m = time / 60;
    time -= m * 60;

    s = time;

    cout << h << " " << m << " " << s;
    
    return 0;
}