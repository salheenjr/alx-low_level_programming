#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string input
 *
 * Return: ALways 0 (success)
*/

void puts_half(char *str)
{
	int count = 0;
	int half;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}

	if (count % 2 == 1)
		half = count / 2;
	else
		half = (count - 1 / 2);

	for (half++; half < count; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
