#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int l1, l2;

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 0; l2 < size; l2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
