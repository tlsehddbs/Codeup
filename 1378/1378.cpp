#include <iostream>
#include <cmath>

int main()
{
    int n, Sn = 0;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
        Sn += (pow(i, 2) + i) / 2;
    std::cout << Sn;
    return 0;
}