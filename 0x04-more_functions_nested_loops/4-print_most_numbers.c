#include "main.h"

/**
*print_most_numbers - prints number 0-9 except 2&4
*
*
*
*
*/
void print_most_numbers(void)
{
char c;

for (c = 0; c <= 9; c++)
{
if (c != 2 && c != 4)
_putchar(c + 48);
}
_putchar('\n');
return;
}
