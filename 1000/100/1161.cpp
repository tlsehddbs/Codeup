#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;

    if(a % 2 != 0)
        cout << "Ȧ��+";
    else
        cout << "¦��+";

    if(b % 2 != 0)
        cout << "Ȧ��=";
    else
        cout << "¦��=";

    if((a + b) % 2 != 0)
        cout << "Ȧ��";
    else 
        cout << "¦��";
        
	return 0;
}