#include "main.h"

/**
*print_numbers - prints number 0-9
*
*
*
*
*/
void print_numbers(void)
{
char c;

for (c = 0; c <= 9; c++)
{
_putchar(c + 48);
}
_putchar('\n');
return;
}
