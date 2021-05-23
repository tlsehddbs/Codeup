#include <iostream>
using namespace std;

int main()
{
	int n, i, sum = 0;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		sum += i;

		if (sum >= n)
			break;
	}
	cout << i;
	
	return 0;
}