#include <iostream>

int main()
{
    int k = 0;
	int a[10] = {};

	for (int i = 0; i < 10; i++)
	    std::cin >> a[i];

	std::cin >> k;
	std::cout << a[k-1];
	
	return 0;
}
