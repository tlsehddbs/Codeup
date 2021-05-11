#include <iostream>

int main()
{
	int n , cnt = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cnt++;
	}
	if (cnt == 2)
		std::cout << "prime";
	else
		std::cout << "not prime";
	return 0;
}