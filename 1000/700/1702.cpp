#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if (b % 2 != 0)
		std::cout << a << b << c;
	else if (b % 2 == 0)
		std::cout << a << b << c << " " << a << b << c;
		
	return 0;
}