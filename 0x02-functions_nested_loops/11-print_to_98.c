#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @i: the starting point
 */
void print_to_98(int i)
{
if (i <= 98)
{
while (i <= 98)
{
if (i == 98)
printf("%d\n", i);
else
printf("%d, ", i);
i = i + 1;
}
}
else if (i > 98)
{
while (i >= 98)
{
if (i == 98)
printf("%d\n", i);
else
printf("%d, ", i);
i = i - 1;
}
}
}
