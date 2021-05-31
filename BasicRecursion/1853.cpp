#include <iostream>
using namespace std;

int n;

int f(int n)
{
    if(n <= 1) 
        return 1;
    
    return f(n - 1) + n;
}

int main()
{
    cin >> n;
    cout << f(n) << endl;

    return 0;
}