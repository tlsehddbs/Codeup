#include <iostream>

int main()
{
    int a, b, age;
    std::cin >> a >> b;
    a /= 10000;

    if(b == 1 || b == 2)
        age = 2012 - (a + 1900) + 1;
    else if(b == 3 || b == 4)
        age = 2012 - (a + 2000) + 1;
    std::cout << age;
    return 0;
}