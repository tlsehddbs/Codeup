#include <iostream>

int main()
{
    int height[3];
    int H = 170;
    
    for (int i = 0; i < 3; i++)
        std::cin >> height[i];
        
    for (int i = 0; i < 3; i++)
    {
        if(height[i] <= H)
        {
            std::cout << "CRASH" << " " << height[i];
            break;
        }
    }
    
    if(height[0] > H && height[1] > H && height[2] > H)
            std::cout << "PASS";
    
    return 0;
}