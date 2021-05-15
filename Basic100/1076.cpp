#include <iostream>

int main()
{
    char c;
    std::cin >> c;

    c = (int)c;

    for (int i = (int)'a'; i <= c; i++)
        std::cout << (char)i << " ";
        
    return 0;
}