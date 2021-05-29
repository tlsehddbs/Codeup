#include <iostream>
using namespace std;

int main() 
{
    int a, b, sum;
    char c;

    cin >> a >> c >> b;
    sum = a;
  
    while(true)
    {
        if(c == '+')
            sum += b;
        if(c == '-')
            sum -= b;
        if(c == '*')
            sum *= b;
        if(c == '/')
            sum /= b;

        cin >> c;
      
        if(c == '=')
        {
            cout << sum;
            break;
        }
        cin >> b;
    }
    return 0;
}