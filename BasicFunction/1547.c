#include <stdio.h>

int n;

bool prime(int n)
{
    int i;

    for(i = 2; i < n; i++)
        if(n % i == 0)
            break;

    return i == n;
}

int main()
{
    scanf("%d", &n);
    if(prime(n)) printf("prime");
    else printf("composite");
    return 0;
}