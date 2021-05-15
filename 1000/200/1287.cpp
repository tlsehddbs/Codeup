#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;

    for (int i = 1; i < 10; i++)
    {
        for(int j = 0; j < i * a; j++)
            std::cout << "*";

        std::cout << "\n";
    }
    return 0;
}