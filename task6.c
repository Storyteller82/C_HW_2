#include <stdio.h>

int main(void)
{
	int a, b;
	scanf ("%d%d", &a, &b);
	//sum = a % 10; 
	//sum = sum * ((a / 10) % 10);
	//sum = sum * ((a / 100) % 10);
	//printf ("%d+%d+%d=%d\n", a, b, c, a+b+c);
	//printf ("%d*%d*%d=%d", a, b, c, a*b*c);
	//printf ("%.2f\n", ((float)(a+b+c)/3));
	//printf ("%d\n", sum);
	printf ("%d\n", a-b);
	return 0;
}

