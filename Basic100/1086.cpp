#include <iostream>
using namespace std;

int main()
{
	float w, h, b;
	cin >> w >> h >> b;

	cout << fixed;
	cout.precision(2);
	cout << (w * h * b) / 8 / 1024 / 1024 << " MB";
	
	return 0;
}