#include <iostream>
using namespace std;

int main()
{
    int a, b, max = 0, temp;

    for(int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        temp = a * b;
        
        if(temp >= max)
            max = temp;
    }
    cout << max;

    return 0;
}