#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer input
 * @b: integer input
 *
 * Return: Always 0 (success)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
