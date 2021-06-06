#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
reget:
	cin >> b;
	cout << b << "\n";

	if(--a != 0) goto reget;
    
	return 0;
}