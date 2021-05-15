#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int a = n;

    if (k != 0)
    {
        for (int i = 1; i < k; i++)
            n = n * a;

        std::cout << n;
    }
    else
        std::cout << 1;
        
    return 0;
}