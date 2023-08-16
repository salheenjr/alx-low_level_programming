#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 *
 * @n: takes an integer type inpute for function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		return (n - n - n);
	else
		return (n);
}
