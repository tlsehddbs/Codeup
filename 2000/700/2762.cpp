#include <iostream>
using namespace std;

int main()
{
    char a[1000] = {}, sol;
    cin >> a;

    cout.uppercase;
    for(int i = 0; i < sizeof a; i++)
        if(i == 0 || a[i - 1] == ',')
            cout << a[i];

    return 0;
}