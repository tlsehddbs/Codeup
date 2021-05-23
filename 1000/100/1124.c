#include <stdio.h>

int main()
{
    int x, y;

    scanf("C%dH%d", &x, &y);
    printf("%d", (12 * x) + (1 * y));
    
    return 0;
}