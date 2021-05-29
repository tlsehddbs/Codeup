#include <iostream>
using namespace std;

int main()
{
    char a[11] = {}, b[14] = {};
    
    cin.getline(a, 11);
    cin.getline(b, 14);

    for(int i = 0; i < 14; i++)
    {
        if(b[i] == ' ')
            cout << " ";
        else
            for(int j = 0; j < 10; j++)
                if(b[i] == a[j])
                    cout << j;
    }
    return 0;
}