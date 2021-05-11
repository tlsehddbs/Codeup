#include <iostream>

int main()
{
	int a, b, c, n;
	std::cin >> a >> b >> c >> n;

	for (int i = 2; i <= n; i++)
		a = a * b + c;
	std::cout << a;
	
	return 0;
}