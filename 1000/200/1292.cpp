#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    char a[11];
    
    cin.getline(a, 11);

    for(int i = 0; i < 10; i++)
        sum += int(a[i]) - 48;

    if(sum % 7 == 4)
        cout << "suspect";
    else
        cout << "citizen";

    return 0;
}