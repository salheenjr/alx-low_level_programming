#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print alphabet with lowercase and uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char chr = 'a';
	char CHR = 'A';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}

	while (CHR <= 'Z')
	{
		putchar(CHR);
		CHR++;
	}
	putchar('\n');

	return (0);
}
