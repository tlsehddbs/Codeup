#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	for(int i = a; i <= b; i++)
		for(int j = 1; j < 10; j++)
			cout << i << "*" << j << "=" << i * j << endl;
			
	return 0;
}