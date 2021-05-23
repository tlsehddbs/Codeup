#include <iostream>
using namespace std;

int main()
{
    int a, b, result = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(i % 3 == 0)
            result += i;
            
        if(i % 4 == 0)
            result -= i;
    }
    cout << result;

    return 0;
}