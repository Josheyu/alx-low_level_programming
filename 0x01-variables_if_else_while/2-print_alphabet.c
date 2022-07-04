#include <stdio.h>
/**
 * main - this is the function
 * description - I sometimes suffer from insomnia
 */
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line */

return (0);
}