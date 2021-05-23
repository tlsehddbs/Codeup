#include <iostream>
using namespace std;

int main()
{
    float pm, jm;
    int p[3] = {};
    int j[2] = {};

    for(int i = 0; i < 3; i++)
        cin >> p[i];
        
    for(int i = 0; i < 2; i++)
        cin >> j[i];

    pm = ((p[0] >= p[1] ? p[1] : p[0]) >= p[2] ? p[2] : (p[0] >= p[1] ? p[1] : p[0]));
    jm = (j[0] >= j[1] ? j[1] : j[0]);

    cout << fixed;
    cout.precision(1);
    cout << (pm + (pm * 0.1)) + (jm + (jm * 0.1));

    return 0;
}