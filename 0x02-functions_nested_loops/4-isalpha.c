#include "main.h"

/**
 * _isalpha - checks if character is letter
 * both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if c is true else 0
*/

int _isalpha(int c)
{
	int uppercase = (c >= 65 && c <= 90);
	int lowercase = (c >= 97 && c <= 122);

	if (uppercase == 0 || lowercase == 0)
		return (1);
	else
		return (0);
}
