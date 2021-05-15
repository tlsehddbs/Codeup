#include <iostream>

int main()
{
    int a, b = 0;
    std::cin >> a >> b;

    if(a < b)
    {
        if(b % a == 0)
            std::cout << a << "*" << b / a << "=" << b;
        else
            std::cout << "none";
    }
    else if(a > b)
    {
        if(a % b == 0)
            std::cout << b << "*" << a / b << "=" << a;
        else
            std::cout << "none";
    }
    else if(a == b)
        std::cout << a << "*" << a / b << "=" << b;
    
    return 0;
}