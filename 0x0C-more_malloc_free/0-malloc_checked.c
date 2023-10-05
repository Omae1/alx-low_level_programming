#include "main.h"
#include <stdlib.h>

/**
*malloc_checked -allocates memory if it terminates with status
*value 98
*@b: number of bytes to be allocated
*Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

return (n);

}
