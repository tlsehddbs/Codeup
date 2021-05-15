#include <iostream>

int main()
{
    double a, b, c, d = 0;
    std::cin >> a >> b >> c >> d;

    if (a/b > c/d)
        std::cout << ">";
    else if (a/b == c/d)
        std::cout << "=";
    else
        std::cout << "<";
        
    return 0;
}