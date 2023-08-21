#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: array
 * @n: number of element an array
 *
 * Return: Always 0 (success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
