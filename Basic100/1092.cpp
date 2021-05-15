#include <iostream>

int main()
{
    int a, b, c, day = 1;
    std::cin >> a >> b >> c;
    
    while (day % a != 0 || day % b != 0 || day % c != 0)
        day++;

    std::cout << day;

    return 0;
}