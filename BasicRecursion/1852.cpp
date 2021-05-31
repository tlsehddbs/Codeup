#include <iostream>
using namespace std;

int n, i = 1;

void f(int n)
{
    if(n <= 0) 
        return;

    cout << i << " ";
    i++;
    
    f(n - 1);
}

int main()
{
    cin >> n;

    f(n);
    cout << endl;

    return 0;
}