#include <iostream>

int main()
{
    int a, b;
    float cal, result;
    int ud[10] = {};

    std::cin >> a >> b;
    for(int i = 0; i < b; i++)
        std::cin >> ud[i];

    cal = a;
    
    for(int i = 0; i < b; i++)
        cal += cal * (float(ud[i]) / 100);

    result = cal - a;
    
    std::cout << std::fixed;
    std::cout.precision(0);
    std::cout << result << "\n";

    if(result > 0)
        std::cout << "good";
    else if(result < 0)
        std::cout << "bad";
    else
        std::cout << "same";
    
    return 0;
}