#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * 10 times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
