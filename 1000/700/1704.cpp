#include <iostream>

int main()
{
    int a, b, birth;
    std::cin >> a >> b;

    birth = a / 10000;
    
    if ((b / 1000000) == 1)
        std::cout << (2012 - (1900 + birth) + 1) << " " << "M";
    else if ((b / 1000000) == 2)
        std::cout << (2012 - (1900 + birth) + 1) << " " << "F";
    else if ((b / 1000000) == 3)
        std::cout << (2012 - (2000 + birth) + 1) << " " << "M";
    else if ((b / 1000000) == 4)
        std::cout << (2012 - (2000 + birth) + 1) << " " << "F";
    return 0;
}