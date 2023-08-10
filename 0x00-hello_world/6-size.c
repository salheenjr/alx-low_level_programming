#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof function to print size of various type
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("\nSize of an int: %d byte(s)", sizeof(int));
	printf("\nSize of a long int: %d byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %d byte(s)", sizeof(long long int));
	printf("\nSize of a float: %d byte(s)", sizeof(float));
	return (0);
}
