#include "main.h"

/**
*_strncat - concatenates two string but upto nth place
*
*@dest: is a pointer
*
*@src: is a pointer
*
*@n: no. of bytes from src
*
*Return: always dest (a pointer )
*/
char *_strncat(char *dest, char *src, int n)
{
int destLength = 0, i;

while (dest[destLength] != '\0')
{
destLength++;
}

for (i = 0; (i < n && src[i] != '\0'); i++)
{
dest[destLength + i] = src[i];
}
if (i < n)
{
dest[destLength + i] = src[i];
}
else
{
dest[(destLength) +i] = '\0';
}
return (dest);
}
