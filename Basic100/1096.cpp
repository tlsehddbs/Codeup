#include <iostream>

int main()
{
	int n = 0, i, j, a, b;
	int p[20][20] = {};
	std::cin >> n;

	for (i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		p[a][b] = 1;
	}

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
			std::cout << p[i][j] << " ";
		
		std::cout << std::endl;
	}
	return 0;
}