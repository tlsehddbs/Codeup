#include <iostream>
using namespace std;

int main()
{
    double h, w = 0;
    cin >> h >> w;
    
    double p_w = (h - 100) * 0.9;
    double bmi = (w - p_w) * 100 / p_w;
    
    if(bmi <= 10)
        cout << "����";
    else if(bmi <= 20)
        cout << "��ü��";
    else
        cout << "��";
    
    return 0;
}