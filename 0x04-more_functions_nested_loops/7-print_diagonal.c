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
	int l1, l2;

	for (l1 = 0; l1 < n; l1++)
	{
		for (l2 = 0; l2 < l1; l2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
