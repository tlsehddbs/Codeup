#include <stdio.h>

int n;

void f(int n)
{
    if(n%2==0)
        printf("even");
    else
        printf("odd");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}