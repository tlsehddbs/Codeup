#include <iostream>
using namespace std;

int main()
{	
	int a;
	cin >> hex >> a;
	
	for (int i = 1; i < 16; i++)
	{
		cout.setf(ios::uppercase);
		cout << hex << a << "*" << hex << i << "=" << hex << a * i << endl;
	}
	return 0;
}