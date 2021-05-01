#include <iostream>

int main()
{
    int k, n, result, count = 0;
    std::cin >> k >> n;
    
    while(k >= n)
    {
        result = k / n;
        k -= result * n;
        k += result;
        count += result;
    }
    std::cout << count;
    return 0;
}