#include <iostream>

int main()
{
    double h, w = 0;
    std::cin >> h >> w;
    
    double p_w = 0;
    if (h < 150)
        p_w = h - 100;
    else if (h < 160)
        p_w = (h - 150) / 2 + 50;
    else 
        p_w = (h - 100) * 0.9;
        
    double bmi = (w - p_w) * 100 / p_w;
    
    if (bmi <= 10)
        std::cout << "����";
    else if(bmi <= 20)
        std::cout << "��ü��";
    else
        std::cout << "��";
    
    return 0;
}