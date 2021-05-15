#include <iostream>

int main()
{
	int a, b, k, r = 0;
	std::cin >> a >> b >> k;

	r = b - a;
	
	for (int i = a; a <= k; i++)
	{
		std::cout << a << " ";
		a += r;
	}
	return 0;
}