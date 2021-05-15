#include <iostream>

int main()
{
    int a, b = 0;
    std::cin >> a >> b;

    if(a < b)
        for (int i = a; i <= b; i++)
            std::cout << i << " ";
    else if(a > b)
        for (int i = b; i <= a; i++)
            std::cout << i << " ";
    else
        std::cout << a;
        
    return 0;
}