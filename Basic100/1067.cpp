#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	if(a % 2 == 0)
	{
		if(a < 0)
			cout << "minus" << "\n";
		else
			cout << "plus" << "\n";

		cout << "even" << "\n";
	}
	else
	{
		if(a < 0)
			cout << "minus" << "\n";
		else
			cout << "plus" << "\n";
            
		cout << "odd" << "\n";
	}
	return 0;
}