#include <stdio.h>

/**
*main -> assign a random number to the variable n each time it is executed
*based a condition
*Return: always 0
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10); /* this is an ascii code for new line */

return (0);
}
