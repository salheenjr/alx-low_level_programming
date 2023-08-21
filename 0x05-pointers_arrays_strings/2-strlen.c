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
	int counter;

	for (counter = 0; counter != '\0'; s++)
		counter++;

	return (counter);
}
