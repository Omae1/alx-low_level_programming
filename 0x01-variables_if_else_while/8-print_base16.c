#include <stdio.h>

/**
 * main - putchar prints hexadecimal char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hexaDecimal[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
	putchar(hexaDecimal[i]);
	}
	putchar('\n');
return (0);
}
