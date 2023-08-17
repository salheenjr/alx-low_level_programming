#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0 (success)
*/

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}