#include "main.h"

/**
*set_bit - function sets bit to a given index
*@n: input number
*@index:where bit is set
*Return: 1 if success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setBit = 1 << index;
	*n = *n | setBit;
	return (1);
}
