#include <iostream>

int main()
{
	float h, b, c, s;
	std::cin >> h >> b >> c >> s;

	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << (h* b* c* s)/8/1024/1024 << " MB";
	
	return 0;
}