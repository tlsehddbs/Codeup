#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 1; i < 10; i++)
    {
        for(int j = 0; j < i * a; j++)
            cout << "*";

        cout << "\n";
    }
    return 0;
}