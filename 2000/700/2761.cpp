#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, arr[3];
    cin >> a >> b;

    arr[0] = a + b;
    arr[1] = a - b; 
    arr[2] = a * b;

	sort(arr, arr + 3);
	cout << arr[1];

    return 0;
}