#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    if(n > 0)
        std::cout << "���";
    else if (n < 0)
        std::cout << "����";
    else 
        std::cout << 0;
        
    return 0;
}