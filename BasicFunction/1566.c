#include <stdio.h>

int a, n;
long long int pow(int a, int n)
{
    long long int result;
    result = a;

    if(n == 0)
        result = 1;
    else if(a == 1)
        result = 1;
    else
        for(int i = 2; i <= n; i++)
            result *= a;
            
    return result;
}

int main()
{
    scanf("%d%d", &a, &n);
    printf("%lld\n", pow(a, n));
}