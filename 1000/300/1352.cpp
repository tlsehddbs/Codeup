#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 0;
    std::cin >> a;
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}