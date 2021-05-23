#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    
    if(a <= 10)
        cout << "정상";
    else if(a <= 20)
        cout << "과체중";
    else 
        cout << "비만";
        
    return 0;
}