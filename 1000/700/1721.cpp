#include <iostream>
#include <cmath>

int main()
{
    float x1, y1, x2, y2, res;
    std::cin >> x1 >> y1 >> x2 >> y2;

    res = sqrt(((y2 - y1) * (y2 - y1)) + ((x2 - x1) * (x2 - x1)));

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << res;
    
    return 0;
}