#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    int menu[5] = { 400, 340, 170, 100, 70 };
    
    cin >> a >> b;
    
    if(menu[a - 1] + menu[b - 1] <= 500)
        cout << "no angry";
    else
        cout << "angry";
        
    return 0;
}