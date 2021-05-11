#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    if (n < 10)
        std::cout << "small";
    else
        std::cout << "big";
        
    return 0;
}