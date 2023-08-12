#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet using putchar function
 *
 * Return: 0 (success)
*/

int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');

	return (0);
}
