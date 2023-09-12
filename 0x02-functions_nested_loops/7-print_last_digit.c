#include "main.h"

/**
 *print_last_digit -prints the last digit of a parameter
 *
 *@c: must be a number
 * Return:  Always 0 (success)
 */
int print_last_digit(int c)
{
int lastdigit;
lastdigit = c % 10;

if (lastdigit < 0)
{
	lastdigit = lastdigit * -1;
}
_putchar(lastdigit + 48);
return (lastdigit);
return (0);
}
