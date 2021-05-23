#include <iostream>
using namespace std;

int main()
{
    int k;
	int a[10] = {};

	for(int i = 0; i < 10; i++)
	    cin >> a[i];

	cin >> k;
	cout << a[k - 1];
	
	return 0;
}
