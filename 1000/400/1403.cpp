#include <iostream>

int main()
{
	int k = 0;
	std::cin >> k;

	int str[k] = {};

	for (int i = 0; i < k; i++)
		std::cin >> str[i];
		
	for (int x = 0; x < 2; x++)
	    for (int i = 0; i < k; i++)
	        std::cout << str[i] << std::endl;

	return 0;
}