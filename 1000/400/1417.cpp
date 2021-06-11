#include <iostream>
using namespace std;

int main()
{
    int a[10];

    for(int i = 0; i < 10; i++)
        cin >> a[i];  

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            if(a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    cout << a[7];
    
    return 0;
}