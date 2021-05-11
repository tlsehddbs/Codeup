#include <iostream>

int main()
{
    using namespace std;
    int a, b = 0;
    cin >> a >> b;
    if (a % 2 != 0)
        cout << "홀수+";
    else
        cout << "짝수+";
    if (b % 2 != 0)
        cout << "홀수=";
    else
        cout << "짝수=";
    if ((a + b) % 2 != 0)
        cout << "홀수";
    else 
        cout << "짝수";
	return 0;
}