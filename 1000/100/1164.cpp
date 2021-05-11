#include <iostream>

int main()
{
    int H = 170;
    int a, b, c = 0;
    std::cin >> a >> b >> c;
    if (a > H && b > H && c > H)
        std::cout << "PASS";
    else
        std::cout << "CRASH";
    return 0;
}