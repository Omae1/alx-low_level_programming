#include "main.h"

/**
 *jack_bauer -prints every minute of 24 hrs
 *
 *
 * Return:  returns nothing function void
 */
void jack_bauer(void)
{
long i, j;

for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar(':');
_putchar(j / 10 + 48);
_putchar(j % 10 + 48);
_putchar('\n');
}
}
return;
}
