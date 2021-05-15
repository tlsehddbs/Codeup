#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if(b % a == 0)
    {
        std::cout << 1 << " " << b / a;
        return 0;
    }
    
    for(int i = a / 2; i > 1; i--)
        if (a % i == 0 && b % i == 0)
        {
            std::cout << a / i << " " << b / i; 
            return 0;
        }
    std::cout << a << " " << b;
    
    return 0;
}