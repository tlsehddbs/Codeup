#include <iostream>

int main()
{
    int a, b, res = 0;
    std::cin >> a >> b;
    
    for (int i = a; i <= b; i++)
        if (i % 3 == 0)
            res = res + i;
        
    std::cout << res;
    return 0;
}