#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n;
    
    if(n % 10 == 1)
    {
        if(n == 11)
            cout << "th";
        else
            cout << "st";
    }
    else if(n % 10 == 2)
    {
        if(n == 12)
            cout << "th";
        else
            cout << "nd";
    }
    else if(n % 10 == 3)
    {
        if(n == 13)
            cout << "th";
        else
            cout << "rd";
    }
    else
        cout << "th";

    return 0;
}