#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;
    
    if(a <= 10)
        std::cout << "정상";
    else if (a <= 20)
        std::cout << "과체중";
    else 
        std::cout << "비만";
        
    return 0;
}