#include <iostream>

int main()
{
    int a[10][10] = {};
    int b[10] = {};

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            std::cin >> a[i][j];
            
    for (int i = 0; i < 10; i++)
        std::cin >> b[i];

    for (int i = 0; i < 10; i++)
    {
        if (b[i] == 1)
            for (int j = 9; j >= 0; j--)
            {
                if (a[j][i] == 0)
                {
                    if(j == 0)
                        std::cout << i + 1 << " " << "safe" << std::endl;
                    else
                        continue;
                }
                else if (a[j][i] < 0)
                {
                    std::cout << i + 1 << " " << "fall" << std::endl;
                    break;
                }
                else if (a[j][i] > 0)
                {
                    std::cout << i + 1 << " " << "crash" << std::endl;
                    break;
                }
            }        
    }
    return 0;
}