#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @i: number of the times table
 */
void print_times_table(int i)
{
int a, b, c;

if (i >= 0 && i <= 15)
{
for (a = 0; a <= i; a++)
{
for (b = 0; b <= i; b++)
{
c = b * a;
if (b == 0)
{
_putchar(c + '0');
}
else if (c < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}
else if (c >= 10 && c < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else if (c >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((c / 100) + '0');
_putchar(((c / 10) % 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
}
