#include "main.h"

/**
*_puts - prints a string to stdout
*
*
*
*@str: the values is a pointer
*/
void _puts(char *str)
{
while(*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
return;
}
