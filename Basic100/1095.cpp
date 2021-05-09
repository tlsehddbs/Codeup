#include <iostream>

int main()
{
    int n, first = 24;;
    int a[10000] = {};
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if (a[i] <= first)
            first = a[i];
    }
    std::cout << first;
    return 0;
}