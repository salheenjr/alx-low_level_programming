#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer input
 *
 * Return: Always 0 (success)
*/

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
		counter++;

	return (counter);
}
