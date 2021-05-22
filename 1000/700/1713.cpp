#include <iostream>

int main()
{
    int a, b, result = 0;
    std::cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(i % 3 == 0)
            result += i;
        if(i % 4 == 0)
            result -= i;
    }
    std::cout << result;

    return 0;
}