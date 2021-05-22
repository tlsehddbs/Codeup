#include <iostream>

int main()
{
    int n, count = 0;
    std::cin >> n;

    while(n != 0)
    {
        n /= 10;
        count++;
    }
    std::cout << count;

    return 0;
}