#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if((age + 2000) <= 2013)
        cout << 13 - age << " " << 3;
    else
        cout << 100 - (age - 13) << " " << 1;
        
    return 0;
}