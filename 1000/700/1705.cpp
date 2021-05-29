#include <iostream>
using namespace std;

int main() 
{ 
    int n, s = 0, start; 
    
    cin >> n; 
    start = n; 
    
    if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9) 
        s++; 

    n /= 10; 
    
    if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9) 
        s++; 

    n /= 10; 

    if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9) 
        s++; 

    if(s == 1) 
        cout << "K"; 
    else if(s == 2) 
        cout << "KK"; 
    else if(s == 3) 
        cout << "KKK"; 
    else 
        cout << start;

    return 0; 
}