#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	float a, b;
	cin >> a >> b;

	cout << fixed;
	cout.precision(1);

	cout << a / b << endl;
	cout << (int)a / (int)b << endl;
	cout << (int)pow(a, b);
	
	return 0;
}