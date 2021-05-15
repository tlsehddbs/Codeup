#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    for(int i = a; i > 1; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
    }
    std::cout << a << " " << b;

    return 0;
}