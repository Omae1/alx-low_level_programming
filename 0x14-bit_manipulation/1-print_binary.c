#include "main.h"

/**
*print_binary -  prints the binary representation of a number
*@n: input number
*/
void print_binary(unsigned long int n)
{
	int size;
	int flags = 0;
	int i;

	size = 8 * sizeof(unsigned long int);

	for (i = size - 1; i >= 0; i--)
	{
		unsigned long int bitMask = 1UL << i;

		if ((n & bitMask) != 0 || i == 0)
		{
			flags = 1;
			_putchar (((n & bitMask) != 0) ? '1' : '0');
		}
		else if (flags)
			_putchar('0');
	}
}
