#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a != 0 && b != 0 && c != 0 && (a + b) != c && (a + b) > c)
    {
        if(a == b && b == c)
            cout << "Á¤»ï°¢Çü";
        else if(a == b || b == c)
            cout << "ÀÌµîº¯»ï°¢Çü";
        else if((a * a + b * b) == c * c)
            cout << "Á÷°¢»ï°¢Çü";
        else
            cout << "»ï°¢Çü";
    }
    else
        cout << "»ï°¢Çü¾Æ´Ô";
        
    return 0;
}