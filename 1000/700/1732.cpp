#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	float a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(1);
	cout << a / b << endl;
	cout << (int)a / (int)b << endl;
	cout << (int)pow(a, b);
	return 0;
}