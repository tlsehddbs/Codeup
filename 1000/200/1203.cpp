#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;
    
    if(a <= 10)
        std::cout << "����";
    else if (a <= 20)
        std::cout << "��ü��";
    else 
        std::cout << "��";
        
    return 0;
}