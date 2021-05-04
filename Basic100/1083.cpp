#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 != 0)
			std::cout << i << " ";
		else
			std::cout << "X ";
	}
	return 0;
}