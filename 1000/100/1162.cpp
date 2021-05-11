#include <iostream>

int main()
{
    int y, m, d, result = 0;
    std::cin >> y >> m >> d;
    result = y - m + d;
    if(result % 10 == 0)
        std::cout << "대박";
    else
        std::cout << "그럭저럭";
    return 0;
}