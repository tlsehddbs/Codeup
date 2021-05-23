#include <stdio.h>

int n;

int f(int n)
{
    int count = 0;
    
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            count++;

    return count;
}

int main()
{
    scanf("%d", &n);
    printf("%d\n", f(n));
}