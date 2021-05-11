#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    
    int input = 0;
    
    cin >> input;
    
    if (input % 7 != 0)
        cout << "not multiple";
    else
        cout << "multiple";
        
    return 0;
}