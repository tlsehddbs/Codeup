#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int sum = 0;
    char n[10] = {};
    cin >> n;

    if(strlen(n) > 1)
    {
        for(int i = 0; i < strlen(n); i++)
            sum += n[i] - 48;

        if(sum >= 10)
        {
        again:
            int temp = 0;
            temp += sum / 10;
            temp += sum - (sum / 10) * 10;
            sum = temp;
            
            if(sum >= 10) goto again;
    
            cout << sum;
        }
        else
            cout << sum;
    }
    else
        cout << n;

    return 0;
}