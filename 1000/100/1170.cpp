#include <iostream>

int main()
{
    int a, b, c = 0;
    std::cin >> a >> b >> c;
    std::cout << a << b;
    if (c < 10)
        std::cout << 0 << c;
    else
        std::cout << c;
        
    return 0;
}