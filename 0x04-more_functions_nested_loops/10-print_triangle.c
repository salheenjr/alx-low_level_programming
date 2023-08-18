#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: is the size of the triangle
 *
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int l1, l2, l3;

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 0; l2 < (size - l1 - 1); l2++)
		{
			_putchar(' ');
		}
		for (l3 = 0; l3 <= l1; l3++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
