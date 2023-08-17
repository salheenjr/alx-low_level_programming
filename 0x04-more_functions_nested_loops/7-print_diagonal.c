#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: number input
 *
 * Return: Always 0 (success)
*/

void print_diagonal(int n)
{
	int space;

	if (n > 0)
	{
		for (space = 0; space < n; space++)
			_putchar(' ');
		_putchar(92);
	}
	_putchar('\n');
}
