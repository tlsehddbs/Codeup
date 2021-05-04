#include <iostream>
int main()
{
    int n = 0;
    std::cin >> n;
    int a[n] = {};
    int max = -101;
    int min = 101;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
        
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }
    std::cout << max << " " << min;
    return 0;
}