#include "main.h"

/**
 * print_sign - checks if the parameter passed is alphabetic
 *
 *@n: must be an int
 * Return:  1 if true otherwise 0
 */
int print_sign(int n)
{
int ch = n;

if (ch > 0)
{
_putchar('+');
return (1);
}
else if (ch == 0)
{
_putchar('0');
return (1);
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
