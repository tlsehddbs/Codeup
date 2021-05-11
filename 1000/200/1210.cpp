#include <iostream>

int main()
{
    int a, b = 0;
    int menu[5] = {400, 340, 170, 100, 70};
    
    std::cin >> a >> b;
    if (menu[a-1] + menu[b-1] <= 500)
        std::cout << "no angry";
    else
        std::cout << "angry";
        
    return 0;
}