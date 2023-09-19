#include "main.h"
/** 
 * display letters a up to z 10 times
 */
void print_alphabet_x10(void)
{
	int letter, l;

	for (l = 0; l <= 9; l++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
