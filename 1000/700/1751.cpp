#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[1001];
	
	cin.getline(c, 1001);
	cout << (int)strlen(c);

	return 0;
}