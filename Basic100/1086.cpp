#include <iostream>

int main()
{
	float w, h, b;
	std::cin >> w >> h >> b;
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << (w* h* b)/8/1024/1024 << " MB";
	return 0;
}