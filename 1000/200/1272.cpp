#include <iostream>
using namespace std;

int main()
{
	int k, h;
	cin >> k >> h;

	if(k % 2 != 0)
		k = (k + 1) / 2;
	else if(k % 2 == 0)
		k = ((k + 1) / 2) * 10;

	if(h % 2 != 0)
		h = (h + 1) / 2;
	else if(h % 2 == 0)
		h = ((h + 1) / 2) * 10;

	cout << k + h;
	
	return 0;
}