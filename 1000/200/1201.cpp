#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    if(n > 0)
        std::cout << "양수";
    else if (n < 0)
        std::cout << "음수";
    else 
        std::cout << 0;
        
    return 0;
}