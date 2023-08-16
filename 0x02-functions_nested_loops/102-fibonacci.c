#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 * starting with 1 and 2 followed by new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	unsigned long fleb1 = 1, fleb2 = 0, result;

	for (n = 0; n < 50; n++)
	{
		result = fleb1 + fleb2;
		printf("%ld", result);
		fleb1 = fleb2;
		fleb2 = result;

		if (n >= 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
