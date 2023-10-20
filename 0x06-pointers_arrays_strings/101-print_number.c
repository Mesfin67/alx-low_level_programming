#include <stdio.h>
/**
 * Prints an integer to the console using only the `_putchar()` function.
 *
 * @param n The integer to print.
 */
void print_number(int n)
{
	if (n<0)
	{
		 _putchar('-');
		 n = -n;
        }
	int divisor =10;
	while (divisor <= n)
	{
		 int digit = (n / divisor) % 10;
		  _putchar('0' + digit);
		   divisor *= 10;
        }
}
