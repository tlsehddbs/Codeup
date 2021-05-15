#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    if(n >= 90)
        std::cout << "A";
    else if(n >= 80 && n < 90)
        std::cout << "B";
    else if(n >= 70 && n < 80)
        std::cout << "C";
    else if(n >= 60 && n < 70)
        std::cout << "D";
    else 
        std::cout << "F";
        
    return 0;
}
