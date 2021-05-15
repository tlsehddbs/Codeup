#include <stdio.h>

int n;

void f(int n)
{
    int a = 0;

    for (int i = 1; i <= n; i++)
        if(n % i == 0)
            a++;

    if(a == 2)
        printf("prime");
    else
        printf("composite");
}

int main()
{
    scanf("%d", &n);
    f(n);
    
    return 0;
}