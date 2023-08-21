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

	for (half = (count / 2); str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
