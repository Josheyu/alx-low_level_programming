#include <stdio.h>

/**
*main -> assign a random number to the variable n each
*and print the last digit of the stored in the variable
*Return : always 0
*/
int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line */

return (0);
}
