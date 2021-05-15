#include <stdio.h>

int n, d[110];

int f()
{
    int i, max = -1;

    for(i = 0; i < n; i++)
    {
        if(d[i] > max)
            max = d[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(d[i] == max)
        {
            return i + 1;
            break;
        }
    }
}

int main()
{
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &d[i]);

    printf("%d", f());
    
    return 0;
}