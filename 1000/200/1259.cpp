#include <iostream>

int main()
{
    int n, res = 0;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            res = res + i;
        
    std::cout << res;
    
    return 0;
}