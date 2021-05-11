#include <iostream>

int main()
{
    char a, b;
    std::cin >> a >> b;
    for(int i = int(a); i <= int(b); i++)
        std::cout << char(i) << " ";
    return 0;
}