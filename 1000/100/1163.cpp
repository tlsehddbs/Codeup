#include <iostream>

int main()
{
    int y, m, d;
    std::cin >> y >> m >> d;
    
    if (((y + m + d) / 100) % 2 == 0)
        std::cout << "대박";
    else
        std::cout << "그럭저럭";
        
    return 0;
}