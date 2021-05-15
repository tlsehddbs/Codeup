#include <iostream>

int main()
{
    int a, b, c = 0;
    std::cin >> a >> b >> c;

    if (a > b && a > c)
    {
        if (a < b + c)
            std::cout << "yes";
        else 
            std::cout << "no";
    }
    else if (b > a && b > c)
    {
        if (b < a + c)
            std::cout << "yes";
        else 
            std::cout << "no";
    }
    else if (c > a && c > b)
    {
        if (a + b > c)
            std::cout << "yes";
        else
            std::cout << "no";
    }
    else
        std::cout << "yes";
        
    return 0;
}