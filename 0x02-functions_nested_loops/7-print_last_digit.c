#include "main.h"

/**
 *print_last_digit -prints the last digit of a parameter
 *
 *@c: must be a number
 * Return:  Always 0 (success)
 */
int print_last_digit(int c)
{
if (c < 0)
c = -c;
if (c >= 10 || c <= -10)
{
_putchar(c % 10 + 48);
return (c % 10 + 48);
}
else
{
_putchar(c / 10 + 48);
return (c / 10);
}
return (0);
}
