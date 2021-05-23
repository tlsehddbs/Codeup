#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;

	int str[100] = {};

	for(int i = 0; i < k; i++)
		cin >> str[i];
		
	for(int x = 0; x < 2; x++)
	    for(int i = 0; i < k; i++)
	        cout << str[i] << endl;

	return 0;
}