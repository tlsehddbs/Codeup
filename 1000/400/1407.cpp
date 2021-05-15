#include <iostream>

int main()
{
    char c[100] = {};
    std::cin.getline(c, 100);
    
    for (int i = 0; i < 100; i++)
    {
        if (c[i] == '\0')
            break;
        else
            if (c[i] == ' ')
                continue;
            else
                std::cout << c[i];
    }
    return 0;
}
