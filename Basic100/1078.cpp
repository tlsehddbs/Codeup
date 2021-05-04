#include <iostream>

int main()
{
	int a, sum = 0;
	std::cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	std::cout << sum;
	return 0;
}