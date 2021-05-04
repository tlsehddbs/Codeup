#include <iostream>

int main()
{
    int n, count;
    std::cin >> n;
    int a[n] = {};

    for(int i = 1; i <= n; i++)
    {
        count = i;
        for(int j = 0; j < n; j++)
        {
            std::cout << count << " ";
            count += n;
        }
        std::cout << "\n";
    }
    return 0;
}