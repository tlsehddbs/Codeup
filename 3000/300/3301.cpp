#include <iostream>

int main()
{
    int n, count = 0;;
    std::cin >> n;
    
    int money[8] = {50000,10000,5000,1000,500,100,50,10};
    for(int i = 0; i < 8; i++)
    {
        count += n/money[i];
        n %= money[i];
    }
    std::cout << count;
    return 0;
}