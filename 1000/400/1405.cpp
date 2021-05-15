#include <iostream>

int main()
{
    int n, temp = 0;
    std::cin >> n;

    int a[n] = {};

    for(int i = 0; i < n; i++)
        std::cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        temp = i;

        for(int j = 0; j < n; j++)
        {
            std::cout << a[temp] << " ";
            temp++;
            
            if(temp == n)
                temp = 0;
        }
        std::cout << '\n';
    }
    return 0;
}