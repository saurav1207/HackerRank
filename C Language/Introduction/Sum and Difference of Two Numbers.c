#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    scanf("%d %d", &a,&b);
    printf("%d %d\n", a+b, a-b);
    
    float m,n;
    scanf("%f %f", &m, &n);
    printf("%0.1f %0.1f", m+n, m-n);
    
    
    
    return 0;
}