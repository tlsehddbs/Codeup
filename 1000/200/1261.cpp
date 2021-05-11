#include <iostream>

int main()
{
    int a[10];
    int c = 0;
    for(int i = 0; i < 10; i++)
        std::cin >> a[i];
        
    for(int i = 0; i < 10; i++)
    {
        if (a[i] % 5 == 0)
        {
            std::cout << a[i];
            c = 1;
            break;
        }
    }
    if (c == 0)
        std::cout << 0;
    return 0;
}