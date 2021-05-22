#include <iostream>

int main()
{
    int n, a, b, x, tot;
    std::cin >> n;

    a = n / 10;
    b = n - (a * 10);
    tot = ((b * 10) + a) * 2;

    if(tot >= 100)
    {
        x = tot / 100;
        tot -= x * 100;
    }

    std::cout << tot << std::endl;
    if(tot > 50)
        std::cout << "OH MY GOD";
    else
        std::cout << "GOOD";
    
    return 0;
}