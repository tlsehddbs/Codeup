#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a != 0 && b != 0 && c != 0 && (a + b) != c && (a + b) > c)
    {
        if(a == b && b == c)
            cout << "���ﰢ��";
        else if(a == b || b == c)
            cout << "�̵�ﰢ��";
        else if((a * a + b * b) == c * c)
            cout << "�����ﰢ��";
        else
            cout << "�ﰢ��";
    }
    else
        cout << "�ﰢ���ƴ�";
        
    return 0;
}