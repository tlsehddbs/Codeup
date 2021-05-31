#include <iostream>
using namespace std;

int main() 
{
    int n, score = 0, temp = 1;
    int a[100] = {};
    
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            score += temp;

            if(a[i + 1] == 1)
                temp++;
            else
                temp = 1;
        }
    }
    cout << score;
  
    return 0;
}