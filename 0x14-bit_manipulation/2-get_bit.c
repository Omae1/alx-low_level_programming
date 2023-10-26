#include "main.h"

/**
* get_bit - returns value of it in a given index
*@n: cheks bits
*@index: bits that is checked
*Return: value of bitt
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dvsr, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dvsr = 1 << index;
	check = n & dvsr;
	if (check == dvsr)
		return (1);
	return (0);
}
