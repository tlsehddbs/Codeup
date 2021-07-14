#include <iostream>
using namespace std;

int main()
{
	char arr[3][3] = { { '*', 'x', '*' },
                       { ' ', 'x', 'x' },
                       { '*', ' ', '*' } };
	
	int k;
	cin >> k;
	
	for(int i = 0; i < 3; i++)
	    for(int b = 0; b < k; b++)
	    {
		    for(int j = 0; j < 3; j++)
                for(int a = 0; a < k; a++)
                    cout << arr[i][j];
		    cout << endl;
	    }

    return 0;
}