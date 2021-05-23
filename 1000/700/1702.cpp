#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if(b % 2 != 0)
		cout << a << b << c;
	else if(b % 2 == 0)
		cout << a << b << c << " " << a << b << c;
		
	return 0;
}