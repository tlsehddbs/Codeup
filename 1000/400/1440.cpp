#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[1000] = {};

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";

        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(a[i] > a[j])
                    cout << "> ";
                else if(a[i] < a[j])
                    cout << "< ";
                else if(a[i] == a[j])
                    cout << "= ";
            }
        }
        cout << "\n";
    }
    return 0;
}