#include <stdio.h>

int n;

long long int f(int n)
{
    long long int result = 0;

    for(int i = 1; i <= n; i++)
        result += i;
        
    return result;
}

int main()
{
    scanf("%d", &n);
    printf("%lld\n", f(n));
}