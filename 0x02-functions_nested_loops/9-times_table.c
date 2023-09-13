#include "main.h"

/**
 *times_table -prints table of 9
 *
 *
 * Return:  returns nothing function void
 */
void times_table(void)
{
int x, y, i, j, k;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
k = x * y;
i = k / 10;
j = k % 10;

if (y  == 0)
{
_putchar('0');
}
else if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(j + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(i + '0');
_putchar(j + '0');
}
}
_putchar('\n');
}
return;
}
