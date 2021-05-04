#include <iostream>

int main()
{
	using namespace std;
	for (int i = 1; i < 10; i++)
		for (int j = 2; j < 6; j++)
		{
			cout << j << " x " << i << " = ";
			cout.width(2);
			cout << (j * i);
			if (j != 5)
				cout << "\t";
			else
				cout << endl;
		}
	return 0;
}