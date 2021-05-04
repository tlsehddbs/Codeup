#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char c[1001];
	cin.getline(c, 1001);
	cout << (int)strlen(c);
	return 0;
}