#include "main.h"
#include <stdlib.h>
/**
*create_array -creates an array of characters
*@size: number of bytes to allocate
*@c: character to allocate
*Return: pointer to a char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;


	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

return (arr);
}

