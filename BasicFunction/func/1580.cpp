#include <stdio.h>

float circle(int r)
{
    float result;
    result = 3.14 * r * r;
    return result;
}

int main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}