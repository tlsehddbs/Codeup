#include <iostream>

int main()
{
    int n, res = 0;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++)
        res = res + i;
        
    std::cout << res;
    
    return 0;
}