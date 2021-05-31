#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[90] = {};
    cin.getline(a, 90);

    for(int i = 97; i <= 122; i++)
    {
        int count = 0;
        for(int j = 0; j <= strlen(a)-1; j++)
        {
            if((int)a[j] == i)
                count++;
        }
        cout << (char)i << ":" << count << endl;
    }
    return 0;
}