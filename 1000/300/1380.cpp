#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	for(int i = 1; i <= 6; i++)
		for(int j = 1; j <= 6; j++)
			if(i + j == a)
				cout << i << " " << j << endl;
				
	return 0;
}