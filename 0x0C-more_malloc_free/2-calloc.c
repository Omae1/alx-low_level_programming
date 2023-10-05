#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocates memory of an array
*
*@nmemb: number of elements
*@size: size of memory to allocate on each block
*
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0)
	return (NULL);
if (size == 0)
	return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;
return (ptr);
}
