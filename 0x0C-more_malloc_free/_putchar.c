#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charaacter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (Write(1, &c, 1));
}
