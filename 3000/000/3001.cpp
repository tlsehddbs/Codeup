#include <iostream>
using namespace std;

int main()
{
	int n, x, c = 0, a[100000] = {};
	bool t = false;
	
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;
		
	for(int i = 0; i < n; i++)
		if(a[i] == x)
		{
			t = true;
			c = i;
		}
			
	if(t == true)
		cout << c + 1;
	else
		cout << -1;
		
	return 0;
}