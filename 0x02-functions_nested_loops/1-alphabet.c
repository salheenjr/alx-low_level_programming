#include "main.h"

/**
 *
 * Description: print alphabet using putchar prototype
 *
 */
void print_alphabet(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		_putchar(chr);
	_putchar('\n');
}
