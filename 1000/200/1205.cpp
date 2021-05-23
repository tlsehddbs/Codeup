#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, result;
    cin >> a >> b;
    
    result = a + b;

    if((a - b) > result) result = a - b;
    if((b - a) > result) result = b - a;

    if((a * b) > result) result = a * b;

    if((a / b) > result) result = a / b;
    if((b / a) > result) result = b / a;

    if(pow(a, b) > result) result = pow(a, b);
    if(pow(b, a) > result) result = pow(b, a);

    cout << std::fixed;
    cout.precision(6);
    cout << result;
    
    return 0;
}