#include <iostream>

int main()
{
    int n, sum = 0, i;
    std::cin >> n;

    for(i = 1; ; i++)
    {
        sum += i;
        if(sum >= n)
            break;
    }
    std::cout << sum;
    
    return 0;
}