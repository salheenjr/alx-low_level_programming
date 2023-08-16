#include "main.h"

/**
 * main - check the code
 *
 * Description: print alphabet using putchar prototype
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		_putchar(chr);
	_putchar('\n');

	return (0);
}
