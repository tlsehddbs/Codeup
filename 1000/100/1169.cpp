#include <iostream>

int main()
{
    int age;
    std::cin >> age;

    if((age + 2000) <= 2013)
        std::cout << 13 - age << " " << 3;
    else
        std::cout << 100 - (age - 13) << " " << 1;
    return 0;
}