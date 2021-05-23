#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        if(i % 2 != 0)
        {
            for(int k = 0; k < ((n - i) / 2); k++)
                cout << " ";

            for(int j = 0; j < i; j++)
                cout << "*";
                
            cout << "\n";
        }
    
    return 0;
}