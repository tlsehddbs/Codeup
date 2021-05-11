#include <iostream>

int main()
{
    using namespace std;
    int a, b, c;
    cin >> a >> b >> c;
    if(a != 0 && b != 0 && c != 0 && (a+b) != c && (a+b) > c)
    {
        if(a == b && b == c)
            cout << "정삼각형";
        else if (a == b || b == c)
            cout << "이등변삼각형";
        else if ((a*a + b*b) == c*c)
            cout << "직각삼각형";
        else
            cout << "삼각형";
    }
    else
        cout << "삼각형아님";
    return 0;
}