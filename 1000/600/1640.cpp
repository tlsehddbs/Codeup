#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = -1;
    string a;
    vector<string> program;
    vector<string> badprogram;

    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        getline(cin, a);
        program.push_back(a);

        if(a.size() <= 3)
        {
            badprogram.push_back(a);
            count++;
        }
        else
        {
            for(int j = 0; j < a.size(); j++)
                if((a[j] == 't' && a[j + 1] == 'a' && a[j + 2] == 'p') 
                || (a[j] == 'x' && a[j + 1] == 'o' && a[j + 2] == 'c' && a[j + 3] == 'u' && a[j + 4] == 'r' && a[j + 5] == 'e'))
                {
                    badprogram.push_back(a);
                    count++;
                    break;
                }
        }
    }

    for(int i = 1; i < badprogram.size(); i++)
        cout << badprogram[i] << endl;

    if(count <= 3)      cout << "safe";
    else if(count <= 6) cout << "warning";
    else                cout << "danger";

    return 0;
}