#include "main.h"

/**
*print_alphabet_x10 - prints alphabets 10x
*
*Return: null (function is void)
*/
void print_alphabet_x10(void)
{
int i;
int j;

for (j = 1; j <= 10; j++)
{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
_putchar('\n');
}
return;
}
