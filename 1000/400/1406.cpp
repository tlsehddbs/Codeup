#include <iostream>
#include <cstring>
int main()
{
    char c[100] = {};
    std::cin >> c;
    if(strcmp(c,"love") == 0)
        std::cout << "I love you.";
    return 0;
}