#include <iostream>

using namespace std;

int main()
{
    char name[20];
    char code;
    int age;
    float key;
    
    cin.getline(name, 20);
    cin >> age >> code >> key;
    
    cout << name << endl;
    cout << age << endl << code << endl << key;
    
    return 0;
}