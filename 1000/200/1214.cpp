#include <iostream>
using namespace std;

int main()
{
    int year, month;

    int Mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int Mony[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cin >> year >> month;

    if(year % 400 == 0)
        cout << Mony[month - 1];
    else if(year % 4 == 0 && year % 100 != 0)
        cout << Mony[month - 1];
    else
        cout << Mon[month - 1];
        
    return 0;
}