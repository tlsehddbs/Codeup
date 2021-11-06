#include <iostream>
using namespace std;

int main()
{
    int n, Ac = 0, Bc = 0;
    string str;
    
    cin >> n >> str;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'A')   Ac++;
        if(str[i] == 'B')   Bc++;
    }

    if(Ac == Bc)        cout << "Tie";
    else if(Ac > Bc)    cout << "A";
    else                cout << "B";

    return 0;
}