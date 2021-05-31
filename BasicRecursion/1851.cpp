#include <iostream>
using namespace std;

int n;

void f(int n)
{
    if(n <= 0) 
        return;

    f(n - 1);
    cout << "*";
}

int main()
{
    cin >> n;

    f(n);
    cout << endl;

    return 0;
}