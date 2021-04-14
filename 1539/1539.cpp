#include <stdio.h>

int n;

void f(int n)
{
    if(n == 0)
        printf("false");
    else    
        printf("true");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}