#include <iostream>

int main()
{
    long long int a, m, d, n;
    std::cin >> a >> m >> d >> n;
    for(int i = 1; i < n; i++)
        a = a * m + d;
    std::cout << a;
    return 0;
}