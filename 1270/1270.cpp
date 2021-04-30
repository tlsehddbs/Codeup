#include <iostream>

int main()
{
    int n, count = 0;
    std::cin >> n;
    for(int i = 1; i <=n; i++)
        if(i%10 == 1)
            count++;
    std::cout << count;
    return 0;
}