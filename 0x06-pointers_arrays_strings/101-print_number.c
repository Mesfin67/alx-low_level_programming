#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/* Set the value at the 6th index from the base address of p to 98. */
	*(p + 5) = 98;

	/* Prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

