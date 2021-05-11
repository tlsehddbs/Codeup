#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    
    int a, b, c = 0;
    cin >> a >> b >> c;
    
    if (a < b)
    {
        if(a <= c)
            cout << a;
        else
            cout << c;
    } 
    else 
    {
        if(b <= c)
            cout << b;
        else
            cout << c;
    }
    return 0;
}