#include <iostream>

int main()
{
    int y, m, d;
    std::cin >> y >> m >> d;
    
    if (((y + m + d) / 100) % 2 == 0)
        std::cout << "���";
    else
        std::cout << "�׷�����";
        
    return 0;
}