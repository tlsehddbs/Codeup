#include <iostream>
int main()
{
    char c[10] = {};
    std::cin >> c;
    for(int i = 0; i < 10; i++)
        if (c[i] == 't')
            std::cout << i + 1 << " ";
    return 0;
}