#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time
 * using putchar prototype
*/
void print_alphabet_x10(void)
{
	int chr, line;

	for (line = 0; line <= 9; line++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
			_putchar(chr);
		_putchar('\n');
	}
}
