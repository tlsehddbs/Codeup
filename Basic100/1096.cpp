#include <iostream>
using namespace std;

int main()
{
	int n = 0, i, j, a, b;
	int p[20][20] = {};

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a >> b;

		p[a][b] = 1;
	}

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
			cout << p[i][j] << " ";
		
		cout << endl;
	}
	return 0;
}