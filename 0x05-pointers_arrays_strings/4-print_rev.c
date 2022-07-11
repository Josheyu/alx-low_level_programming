#include "main.h"
#include <string.h>

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int i, c;

	c = strlen(s);
	for (i = c - 1; c >= 0; i--)
	{
		_putchar(s[i]);
	}
}
