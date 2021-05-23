#include <iostream>
using namespace std;

int main()
{
    int a, result = 1;
    cin >> a;

    for(int i = 1; i <= a; i++)
        result *= i;

    cout << result;

    return 0;
}