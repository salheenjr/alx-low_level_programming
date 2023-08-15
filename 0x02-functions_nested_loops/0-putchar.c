#include "main.h"

/**
 * main - check the code
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: Always 0. (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int chr;

	for (chr = 0; chr < 8; chr++)
		_putchar(str[chr]);
	_putchar('\n');

	return (0);
}
