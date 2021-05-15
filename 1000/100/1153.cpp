#include <iostream>
using std::cout;

int main()
{
    int a, b = 0;
    std::cin >> a >> b;

    if (a > b)
        cout << ">";
    else if (b > a)
        cout << "<";
    else
        cout << "=";
        
    return 0;
}