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
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
