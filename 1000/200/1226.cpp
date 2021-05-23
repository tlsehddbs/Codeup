#include <iostream>
using namespace std;

int main()
{
	int num1[7] = {};
	int num2[6] = {};

	int count = 0, bouns = 0;

	for(int i = 0; i < 7; i++)
		cin >> num1[i];
	for(int i = 0; i < 6; i++)
		cin >> num2[i];

	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 6; j++)
		{
			if (num1[i] == num2[j])
				count++;
			if (num1[6] == num2[j])
				bouns++;
		}

	if(count == 6)
		cout << 1;
	else if(count == 5)
	{
		if(bouns != 0)
			cout << 2;
		else
			cout << 3;
	}
	else if(count == 4)
		cout << 4;
	else if(count == 3)
		cout << 5;
	else
		cout << 0;
		
	return 0;
}