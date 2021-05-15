#include <iostream>
using std::cin;
using std::cout;
    
int main()
{
    int input = 0;
    cin >> input;
    
    if (input % 7 != 0)
        cout << "not multiple";
    else
        cout << "multiple";
        
    return 0;
}