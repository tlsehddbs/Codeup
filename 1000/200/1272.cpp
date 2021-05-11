#include <iostream>

int main()
{
	int k, h;
	std::cin >> k >> h;

	if (k % 2 != 0)
		k = (k + 1) / 2;
	else if (k % 2 == 0)
		k = ((k + 1) / 2) * 10;

	if (h % 2 != 0)
		h = (h + 1) / 2;
	else if (h % 2 == 0)
		h = ((h + 1) / 2) * 10;

	std::cout << k + h;
	return 0;
}