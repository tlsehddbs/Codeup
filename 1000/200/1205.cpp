#include <iostream>
#include <cmath>

int main()
{
    float a, b, result;
    std::cin >> a >> b;
    
    result = a + b;

    if((a - b) > result) result = a - b;
    if((b - a) > result) result = b - a;

    if((a * b) > result) result = a * b;

    if((a / b) > result) result = a / b;
    if((b / a) > result) result = b / a;

    if(pow(a, b) > result) result = pow(a, b);
    if(pow(b, a) > result) result = pow(b, a);

    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << result;
    return 0;
}