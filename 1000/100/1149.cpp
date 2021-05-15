#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b;

    if (a > b)
        std::cout << a;
    else if (a < b)
        std::cout << b;
    else 
        std::cout << a;
        
    return 0;
}