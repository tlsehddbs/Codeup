#include <iostream>

int main()
{
    int y, m, d, result = 0;
    std::cin >> y >> m >> d;

    result = y - m + d;

    if(result % 10 == 0)
        std::cout << "���";
    else
        std::cout << "�׷�����";
        
    return 0;
}