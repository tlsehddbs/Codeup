#include <stdio.h>
using namespace std;

int myabs(int a)
{
    if(a < 0)
        a = a * -1;
    return a;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
    return 0;
}