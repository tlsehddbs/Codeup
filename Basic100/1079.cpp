#include <iostream>

int main()
{
	char c = 'a';
	
	while (c != 'q')
	{
		std::cin >> c;
		std::cout << c << "\n";
	}
	return 0;
}