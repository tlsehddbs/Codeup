#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float cal, result;
    int ud[10] = {};

    cin >> a >> b;
    for(int i = 0; i < b; i++)
        cin >> ud[i];

    cal = a;
    
    for(int i = 0; i < b; i++)
        cal += cal * (float(ud[i]) / 100);

    result = cal - a;
    
    cout << fixed;
    cout.precision(0);
    cout << result << "\n";

    if(result > 0)
        cout << "good";
    else if(result < 0)
        cout << "bad";
    else
        cout << "same";
    
    return 0;
}