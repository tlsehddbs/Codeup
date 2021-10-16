#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = {}, s2[20] = {}, s3[20] = {};
    cin >> s1 >> s2 >> s3;

    if((s2[0] == s1[strlen(s1) - 1]) && (s3[0] == s2[strlen(s2) - 1]) && (s1[0] == s3[strlen(s3) - 1]))
        cout << "good";
    else
        cout << "bad";

    return 0;
}