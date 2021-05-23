#include <iostream>
using namespace std;

int main()
{
	int r, g, b, i, j, k, count = 0;
	cin >> r >> g >> b;

	for(i = 0; i < r; i++)
		for(j = 0; j < g; j++)
			for(k = 0; k < b; k++)
				cout << i << " " << j << " " << k << "\n";

	cout << i * j * k;
	
	return 0;
}