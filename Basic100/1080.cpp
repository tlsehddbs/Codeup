#include <iostream>

int main()
{
	int n, i, sum = 0;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		sum += i;
		if (sum >= n)
			break;
	}
	std::cout << i;
	return 0;
}