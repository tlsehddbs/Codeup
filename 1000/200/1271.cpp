#include <iostream>

int main()
{
    int n= 0;
    int max = -1000001;
    std::cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    for (int i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    std::cout << max;
    return 0;
}