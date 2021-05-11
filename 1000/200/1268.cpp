#include <iostream>
int main()
{
    int a, sum = 0;
    std::cin >> a;
    
    int s[a] = {};
    
    for(int i = 0; i < a; i++)
        std::cin >> s[i];
        
    for(int i = 0; i < a; i++)
        if(s[i] % 2 == 0)
            sum += 1;
        
    std::cout << sum;
    return 0;
}