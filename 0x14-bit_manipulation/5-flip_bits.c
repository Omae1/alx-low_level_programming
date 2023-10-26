#include "main.h"

/**
*flip_bits - function counts the number of bits to change
*@n: first number
*@m: second number
*Return: number of bits changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bitcounts = 0;

	unsigned long int curr;
	unsigned long int excul = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excul >> i;
		if (curr & 1)
		bitcounts++;

	}
	return (bitcounts);

}
