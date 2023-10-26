#include "main.h"

/**
*clear_bit - sets value of bit to zero
*@n: input value/parameter
*@index: bit index value to be cleared
*Return: 1 if success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
