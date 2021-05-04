#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char c[20]={};
    cin>>c;
    for(int i=0;i<strlen(c);i++)
        cout << char(c[i] + 2);
    cout<<endl;
    for (int i = 0; i < strlen(c); i++)
        cout << char((c[i] * 7) % 80 + 48);
    return 0;
}