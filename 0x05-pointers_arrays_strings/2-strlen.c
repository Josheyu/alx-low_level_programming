#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i += 1;
		*s = *s + 1;
	}
	return (i);
}
