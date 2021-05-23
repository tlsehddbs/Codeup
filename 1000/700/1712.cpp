#include <iostream>
using namespace std;

int main()
{
	int a, b, k, r;
	cin >> a >> b >> k;

	r = b - a;
	
	for(int i = a; a <= k; i++)
	{
		cout << a << " ";
		a += r;
	}
	return 0;
}