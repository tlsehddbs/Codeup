#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
            cout << "*";
        
        cout << endl;
    }
    return 0;
}