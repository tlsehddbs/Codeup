#include <iostream>

int main()
{
    long long int a, r, n;
    std::cin >> a >> r >> n;

    for (int i = 1; i < n; i++)
        a *= r;

    std::cout << a;
    
    return 0;
}