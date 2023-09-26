#include "main.h"

/**
* _memset - fills memories with a constant byte
*@s: pointer of a memory region
*@b: initializes the memory region
*@n: nth byte in memory region to intialize
* Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n || s[i] != '\0'; i++)
s[i] = b;
return (s);
}
