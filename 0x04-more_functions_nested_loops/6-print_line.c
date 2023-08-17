#include "main.h"

/**
 * print_line - function that draws a straight line
 *
 * @n: number input
 *
 * Return: Alwaya 0 (success)
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
			putchar('_');
		putchar('\n');
	}
}
