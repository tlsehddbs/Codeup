#include <iostream>

int main()
{
	int a, b = 0;
	std::cin >> a >> b;

	for (int i = a; i <= b; i++)
		for (int j = 1; j < 10; j++)
			std::cout << i << "*" << j << "=" << i * j << std::endl;
			
	return 0;
}