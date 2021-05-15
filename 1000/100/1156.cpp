#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;
    
    if (a % 2 == 0)
        std::cout << "even";
    else 
        std::cout << "odd";

    return 0;
}