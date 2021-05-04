#include <iostream>

int main()
{
    int a, b, c = 0;
    std::cin >> a >> b >> c;
    std::cout << a;
    if (b < 10)
        std::cout << 0 << b;
    else
        std::cout << b;
        
    if (c < 100)
    {
        if (c < 10)
            std::cout << 0 << 0 << c;
        else
            std::cout << 0 << c;
    }
    else
        std::cout << c;
    return 0;
}