#include "main.h"

/**
*binary_to_uint - converts binary to unsigned interger
*@b: pointer to a string of characters
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int results = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len] == '0' || b[len] == '1')
	{
		results = (results << 1) | (b[len] - '0');
		len++;
	}

	if (b[len] != '\0')
	{
		return (0);
	}
	return (results);
}
