#include <stdio.h>

double ABS(double n) 
{
	if (n < 0)
		return -n;
    else    
        return n;
}
int main() 
{	
	double n;
	scanf("%lf", &n);

	printf("%.10g", ABS(n));
	return 0;
}