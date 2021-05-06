#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b, n;
    std::cin >> b >> n;

    for(int i = 1; i <= b; i++)
    {
        if(pow(i,n) >= b)
        {
            a = i;
            break;
        }
    }
    a = (pow(a, n) - b) >= (b - pow(a - 1, n)) ? a - 1 : a;
    
    std::cout << a;
    return 0;
}