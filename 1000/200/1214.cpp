#include <iostream>

int main()
{
    int year, month = 0;

    int Mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int Mony[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    std::cin >> year >> month;

    if(year % 400 == 0)
        std::cout << Mony[month-1];
    else if(year % 4 == 0 && year % 100 != 0)
        std::cout << Mony[month-1];
    else
        std::cout << Mon[month-1];
        
    return 0;
}