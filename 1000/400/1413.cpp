#include <iostream>
#include <cstring>

int main()
{
    char a[100] = {};
    std::cin.getline(a, 100);

    for(int i = (strlen(a) - 1); i >= 0; i--)
        std::cout << a[i];
        
    return 0;
}